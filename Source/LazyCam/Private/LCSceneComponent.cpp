// Fill out your copyright notice in the Description page of Project Settings.

#include "LCSceneComponent.h"
#include "LazyCam.h"



ULCSceneComponent::ULCSceneComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void ULCSceneComponent::BeginPlay()
{
	Super::BeginPlay();

}

void ULCSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

#if WITH_EDITOR

void ULCSceneComponent::PostEditComponentMove(bool bFinished)
{
	
	auto parent = GetAttachmentRootActor();
	if(parent)
		parent->PostEditMove(bFinished);
}

#endif
