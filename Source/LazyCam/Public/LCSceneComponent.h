// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LCSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LAZYCAM_API ULCSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:	

	ULCSceneComponent();

protected:

	virtual void BeginPlay() override;

public:

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


#if WITH_EDITOR
public:

	virtual void PostEditComponentMove(bool bFinished) override;

#endif
};
