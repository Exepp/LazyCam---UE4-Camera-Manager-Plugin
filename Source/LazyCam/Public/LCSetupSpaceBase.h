// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LCSetupSpaceBase.generated.h"

class USplineComponent;
class ULCSceneComponent;
class UBoxComponent;
class UCameraComponent;
class UBillboardComponent;

UCLASS()
class LAZYCAM_API ALCSetupSpaceBase : public AActor
{
	GENERATED_BODY()

private:
	static const FVector splineOffset;
	
public:	
	ALCSetupSpaceBase();

public:	
	virtual void NotifyActorBeginOverlap(AActor * otherActor) override;
	virtual void NotifyActorEndOverlap(AActor * otherActor) override;
	virtual void Destroyed() override;
	
protected:
	virtual void BeginPlay() override;


private:
	void onOverlapWithCharacterNotify();

// in editor: 
#if WITH_EDITOR
	virtual void PostEditMove(bool bFinished) override;
	virtual void PreEditChange(UProperty* propertyThatWillChange) override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent) override;
	virtual void PostEditUndo() override;

private:

	void inEditorManagement();
		void propertiesChangeManagement(const FName & changedPropertyName);
			void swapTimesChangeManagement(const FName & changedPropertyName);
			void setupBasePreChangeManagement();
			void setupBasePostChangeManagement();
		void setupBaseManagement();
			bool SwapPathIsSet();
			void updateSwapPath();
		void OneSplinePointManagement();
		void makeEditorOnlyChangeManagement();
		void updateCamerasLocations();
		void updateComponentsDataVariables();
#endif

public:

	// components:

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		UBillboardComponent * root;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		UBoxComponent * collisionBox;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		USplineComponent * cameraPath;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		USplineComponent * swapPath;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		ULCSceneComponent * baseCameraSetup;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		ULCSceneComponent * targetCameraSetup;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		ULCSceneComponent * progressStartSetup;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Components")		ULCSceneComponent * progressEndSetup;

	UPROPERTY()																		UCameraComponent * baseCamera;
	UPROPERTY()																		UCameraComponent * targetCamera;
	UPROPERTY()																		UBillboardComponent * progressStart;
	UPROPERTY()																		UBillboardComponent * progressEnd;

	// variables:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SceneHandle")			ALCSetupSpaceBase *	setupBase;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SceneHandle")			bool				makeEditorOnly;


	// camera and player maximum looking direction offset from the one set in editor
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings", 
		meta = (ClampMin = 0, ClampMax = 180))										float maxSeeingAngleRadius;

	// How much should camera look at player (-1 will make camera look at opposite direction to player)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings")		float lookAtPlayerRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings",	
		meta = (ClampMin = 0))														float playerLookingSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings", 
		meta = (ClampMin = 0.1))													float cameraSpeed;

	// how much should camera follow player's movement towards current camera facing direction (not player looking direction)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings")		float forwardMovementRatio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings")		float upwardMovementRatio;

	// time that camera will need to change its current settings to new ones. When set to 0, camera will change its location instantly
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings", 
		meta = (ClampMin = 0))														float settingsSwapTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings",
		meta = (ClampMin = 0))														float swapPathExecutionTime;

	//Adjusts SwappingPath, so that when player run away from camera, it stops following SwappingPath (may couse camera go through walls if your SwappingPath lies near them)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings")		bool useCleverSwappingPathAdjustment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraSettings")		bool useYawOnly;


	// Deleted components data:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ComponentsData")		FRotator baseCameraRotation;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ComponentsData")		FRotator targetCameraRotation;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ComponentsData")		FVector progressStartLocation;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "ComponentsData")		FVector progressEndLocation;

	// Runtime:

	UPROPERTY(BlueprintReadWrite, Category = "Runtime")								FVector playerEnterLocation;

	bool							firstOverlapNotify;

#if WITH_EDITOR

	TArray<ALCSetupSpaceBase*>		objectsReferencingThis;
	FVector							previousTickSwapPathFirstSplinePoint;
	bool							needToSetUpSwapPath;

#endif

};