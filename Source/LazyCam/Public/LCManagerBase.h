// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "LCManagerBase.generated.h"

UCLASS(abstract)
class LAZYCAM_API ALCManagerBase : public APlayerCameraManager
{
	GENERATED_BODY()
	
	
public:

	UFUNCTION(BlueprintImplementableEvent)
		void setNewSetup(ALCSetupSpaceBase * newSetupSpace);

	UFUNCTION(BlueprintImplementableEvent)
		void leftSetupSpace(ALCSetupSpaceBase * leftSetupSpace);
	
};