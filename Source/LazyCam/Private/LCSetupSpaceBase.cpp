// Fill out your copyright notice in the Description page of Project Settings.

#include "LCSetupSpaceBase.h"
#include "LCSceneComponent.h"
#include "LCManagerBase.h"
#include "LazyCam.h"
#include "Camera/CameraActor.h"
#include "Kismet/GameplayStatics.h"

#include "Components/BillboardComponent.h"
#include "Components/BoxComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"

#if WITH_EDITOR
#include "UnrealEd.h"

// helpful functions:

// In world space
inline FVector getSplineFirstPointLocation(const USplineComponent * spline)
{
	if (spline && spline->IsValidLowLevel())
		return spline->GetLocationAtSplinePoint(0, ESplineCoordinateSpace::World);
	else
		return FVector::ZeroVector;
}
// In world space
inline FVector getSplineLastPointLocation(const USplineComponent * spline)
{
	if (spline && spline->IsValidLowLevel())
		return spline->GetLocationAtSplinePoint(spline->GetNumberOfSplinePoints() - 1, ESplineCoordinateSpace::World);
	else
		return FVector::ZeroVector;
}
// In world space
inline void setSplineFirstPointLocation(USplineComponent * spline, const FVector & newLocation)
{
	if (spline && spline->IsValidLowLevel())
		spline->SetLocationAtSplinePoint(0, newLocation, ESplineCoordinateSpace::World);
}
// In world space
inline void setSplineLastPointLocation(USplineComponent * spline, const FVector & newLocation)
{
	if (spline && spline->IsValidLowLevel())
		spline->SetLocationAtSplinePoint(spline->GetNumberOfSplinePoints() - 1, newLocation, ESplineCoordinateSpace::World);
}

inline void removeAllSplinePoints(USplineComponent * spline)
{
	if (spline && spline->IsValidLowLevel())
	{
		if (spline->GetNumberOfSplinePoints())
		{
			auto splineParentActor = spline->GetAttachmentRootActor();
			if (splineParentActor && splineParentActor->IsSelectedInEditor())
			{
				GEditor->SelectNone(true, true);
				GEditor->SelectActor(splineParentActor, true, true);
			}

			for (int i = spline->GetNumberOfSplinePoints() - 1; i >= 0; i--)
				spline->RemoveSplinePoint(i, false);
		}
	}
}
#endif

const FVector ALCSetupSpaceBase::splineOffset = FVector(0, 0, 40);

ALCSetupSpaceBase::ALCSetupSpaceBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	root = CreateDefaultSubobject<UBillboardComponent>(FName("root"));
	collisionBox = CreateDefaultSubobject<UBoxComponent>(FName("collisionBase"));
	cameraPath = CreateDefaultSubobject<USplineComponent>(FName("cameraPath"));
	swapPath = CreateDefaultSubobject<USplineComponent>(FName("swapPath"));

	baseCameraSetup = CreateDefaultSubobject<ULCSceneComponent>(FName("baseCameraSetup"));
	targetCameraSetup = CreateDefaultSubobject<ULCSceneComponent>(FName("targetCameraSetup"));
	progressStartSetup = CreateDefaultSubobject<ULCSceneComponent>(FName("progressStartSetup"));
	progressEndSetup = CreateDefaultSubobject<ULCSceneComponent>(FName("progressEndSetup"));

	baseCamera = CreateDefaultSubobject<UCameraComponent>(FName("baseCamera"));
	targetCamera = CreateDefaultSubobject<UCameraComponent>(FName("targetCamera"));
	progressStart = CreateDefaultSubobject<UBillboardComponent>(FName("progressStart"));
	progressEnd = CreateDefaultSubobject<UBillboardComponent>(FName("progressEnd"));

	RootComponent = root;

	collisionBox->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	cameraPath->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	swapPath->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	baseCameraSetup->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	targetCameraSetup->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	progressStartSetup->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	progressEndSetup->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	baseCamera->AttachToComponent(baseCameraSetup, FAttachmentTransformRules::KeepRelativeTransform);
	targetCamera->AttachToComponent(targetCameraSetup, FAttachmentTransformRules::KeepRelativeTransform);
	progressStart->AttachToComponent(progressStartSetup, FAttachmentTransformRules::KeepRelativeTransform);
	progressEnd->AttachToComponent(progressEndSetup, FAttachmentTransformRules::KeepRelativeTransform);

	baseCamera->bIsEditorOnly = true;
	targetCamera->bIsEditorOnly = true;
	progressStart->bIsEditorOnly = true;
	progressEnd->bIsEditorOnly = true;

	{
		setupBase = nullptr;
		makeEditorOnly = false;

		maxSeeingAngleRadius = 35.f;
		lookAtPlayerRatio = 0.6f;
		playerLookingSpeed = 0.f;
		cameraSpeed = 2.f;
		forwardMovementRatio = 0.f;
		upwardMovementRatio = 0.f;
		settingsSwapTime = 1.f;
		swapPathExecutionTime = 0.f;
		useYawOnly = false;
		useCleverSwappingPathAdjustment = false;

		firstOverlapNotify = true;
	}

#if WITH_EDITOR

	needToSetUpSwapPath = true;

	// no points are needed if there is no base to this setup yet (setupBase == nullptr)
	removeAllSplinePoints(swapPath);

#endif // WITH_EDITOR
}

void ALCSetupSpaceBase::NotifyActorBeginOverlap(AActor * otherActor)
{
	if (otherActor == UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
		onOverlapWithCharacterNotify();
}

void ALCSetupSpaceBase::onOverlapWithCharacterNotify()
{
	if (firstOverlapNotify)
	{
		playerEnterLocation = UGameplayStatics::GetPlayerPawn(GetWorld(), 0)->GetActorLocation();
		firstOverlapNotify = false;
	}

	auto cameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);

	if (cameraManager)
	{
		ALCManagerBase* castedCameraManager = Cast<ALCManagerBase>(cameraManager);
		if (castedCameraManager)
			castedCameraManager->setNewSetup(this);
	}
}

void ALCSetupSpaceBase::NotifyActorEndOverlap(AActor * otherActor)
{
	if (otherActor == UGameplayStatics::GetPlayerPawn(GetWorld(), 0))
	{
		auto cameraManager = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0);

		if (cameraManager)
		{
			ALCManagerBase* castedCameraManager = Cast<ALCManagerBase>(cameraManager);
			if (castedCameraManager)
				castedCameraManager->leftSetupSpace(this);
		}
	}
}

void ALCSetupSpaceBase::Destroyed()
{
#if WITH_EDITOR

	if (setupBase && setupBase->IsValidLowLevel())
		setupBase->objectsReferencingThis.Remove(this);
#endif
	Super::Destroyed();


}

void ALCSetupSpaceBase::BeginPlay()
{
	Super::BeginPlay();

	// Correct Spline Points to match camera locations in editor
	for (int32 i = 0; i < cameraPath->GetNumberOfSplinePoints(); i++)
		cameraPath->SetLocationAtSplinePoint(i, cameraPath->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World) - splineOffset, ESplineCoordinateSpace::World);
	for (int32 i = 0; i < swapPath->GetNumberOfSplinePoints(); i++)
		swapPath->SetLocationAtSplinePoint(i, swapPath->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::World) - splineOffset, ESplineCoordinateSpace::World);

	// Check if is overlapping character from beggining
	if (IsOverlappingActor(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)))
		onOverlapWithCharacterNotify();
}

#if WITH_EDITOR

void ALCSetupSpaceBase::PostEditMove(bool bFinished)
{
	Super::PostEditMove(bFinished);
	inEditorManagement();
}

void ALCSetupSpaceBase::PreEditChange(UProperty* propertyThatWillChange)
{
	Super::PreEditChange(propertyThatWillChange);

	if (propertyThatWillChange && propertyThatWillChange->GetFName() == GET_MEMBER_NAME_CHECKED(ALCSetupSpaceBase, setupBase))
		setupBasePreChangeManagement();
}

void ALCSetupSpaceBase::setupBasePreChangeManagement()
{
	if (setupBase && setupBase->IsValidLowLevel())
		setupBase->objectsReferencingThis.Remove(this);
}

void ALCSetupSpaceBase::PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent)
{
	Super::PostEditChangeProperty(propertyChangedEvent);

	if(propertyChangedEvent.Property)
		propertiesChangeManagement(propertyChangedEvent.Property->GetFName());

	inEditorManagement();
}

void ALCSetupSpaceBase::propertiesChangeManagement(const FName & changedPropertyName)
{
	if(changedPropertyName == GET_MEMBER_NAME_CHECKED(ALCSetupSpaceBase, setupBase))
		setupBasePostChangeManagement();
	else
		swapTimesChangeManagement(changedPropertyName);
}

void ALCSetupSpaceBase::setupBasePostChangeManagement()
{
	// prevents being "setupBase" to itself and having objects to be bases to each other (that would make an endless loop)
	if (setupBase == this || (setupBase && setupBase->IsValidLowLevel() && setupBase->setupBase == this))
		setupBase = nullptr;

	else if (setupBase && setupBase->IsValidLowLevel())
		setupBase->objectsReferencingThis.Add(this);
}

void ALCSetupSpaceBase::swapTimesChangeManagement(const FName & changedPropertyName)
{
	if (changedPropertyName == GET_MEMBER_NAME_CHECKED(ALCSetupSpaceBase, settingsSwapTime))
		swapPathExecutionTime = 0.f;
	else if (swapPathExecutionTime &&changedPropertyName == GET_MEMBER_NAME_CHECKED(ALCSetupSpaceBase, swapPathExecutionTime))
		settingsSwapTime = swapPathExecutionTime;
}

void ALCSetupSpaceBase::PostEditUndo()
{
	Super::PostEditUndo();
	inEditorManagement();
}

void ALCSetupSpaceBase::inEditorManagement()
{
	setupBaseManagement();
	OneSplinePointManagement();
	makeEditorOnlyChangeManagement();
	updateCamerasLocations();
	updateComponentsDataVariables();

	for (size_t i = 0; i < objectsReferencingThis.Num(); i++)
	{
		if (objectsReferencingThis[i] && objectsReferencingThis[i]->IsValidLowLevel())
			objectsReferencingThis[i]->inEditorManagement();
		else
			objectsReferencingThis.RemoveAt(i);
	}
}

void ALCSetupSpaceBase::setupBaseManagement()
{
	if (setupBase && setupBase->IsValidLowLevel())
	{	
		if(SwapPathIsSet())
			updateSwapPath();
	}
	else 
	{
		needToSetUpSwapPath = true;
		removeAllSplinePoints(swapPath);
	}
}

bool ALCSetupSpaceBase::SwapPathIsSet()
{
	if (needToSetUpSwapPath) // on first tick, after setupBase is set and valid
	{
		needToSetUpSwapPath = false;

		if (swapPath->GetNumberOfSplinePoints() == 0)
		{
			swapPath->AddSplinePoint(getSplineLastPointLocation(setupBase->cameraPath), ESplineCoordinateSpace::World);
			swapPath->AddSplinePoint(getSplineFirstPointLocation(cameraPath), ESplineCoordinateSpace::World);
		}
		
		previousTickSwapPathFirstSplinePoint = getSplineFirstPointLocation(swapPath);

		// make it return true in the next tick
		return false;
	}

	return true;
}

void ALCSetupSpaceBase::updateSwapPath()
{
	setSplineFirstPointLocation(cameraPath, getSplineLastPointLocation(swapPath));

	if (previousTickSwapPathFirstSplinePoint == getSplineFirstPointLocation(swapPath))
	{
		setSplineFirstPointLocation(swapPath, getSplineLastPointLocation(setupBase->cameraPath));
	}
	else
	{
		setSplineLastPointLocation(setupBase->cameraPath, getSplineFirstPointLocation(swapPath));

		// must update setupBase camera and data:

		setupBase->updateCamerasLocations();
		setupBase->updateComponentsDataVariables();
	}

	previousTickSwapPathFirstSplinePoint = getSplineFirstPointLocation(swapPath);
}

void ALCSetupSpaceBase::OneSplinePointManagement()
{
	FVector scaleVector;
	if (cameraPath->GetNumberOfSplinePoints() == 1)
		scaleVector = FVector::ZeroVector;
	else
		scaleVector = FVector::OneVector;

	targetCameraSetup->SetWorldScale3D(scaleVector);
	progressStart->SetWorldScale3D(scaleVector);
	progressEnd->SetWorldScale3D(scaleVector);
}

void ALCSetupSpaceBase::makeEditorOnlyChangeManagement()
{
	baseCameraSetup->bIsEditorOnly = makeEditorOnly;
	targetCameraSetup->bIsEditorOnly = makeEditorOnly;
	progressStartSetup->bIsEditorOnly = makeEditorOnly;
	progressEndSetup->bIsEditorOnly = makeEditorOnly;
}

void ALCSetupSpaceBase::updateCamerasLocations()
{
	baseCameraSetup->SetWorldLocation(getSplineFirstPointLocation(cameraPath) - splineOffset);
	targetCameraSetup->SetWorldLocation(getSplineLastPointLocation(cameraPath) - splineOffset);
}

void ALCSetupSpaceBase::updateComponentsDataVariables()
{
	baseCameraRotation = baseCameraSetup->GetComponentRotation();
	targetCameraRotation = targetCameraSetup->GetComponentRotation();
	progressStartLocation = progressStartSetup->GetComponentLocation();
	progressEndLocation = progressEndSetup->GetComponentLocation();
}
#endif