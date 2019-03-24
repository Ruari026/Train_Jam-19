// Fill out your copyright notice in the Description page of Project Settings.

#include "BackgroundDecorationScript.h"

// Sets default values
ABackgroundDecorationScript::ABackgroundDecorationScript()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABackgroundDecorationScript::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABackgroundDecorationScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (this->GetActorLocation().Y < -2000)
	{
		Destroy();
	}
	else
	{
		MoveDecorationAlongRail(DeltaTime);
	}
}


/*
====================================================================================================
Handling the decoration movement
====================================================================================================
*/
void ABackgroundDecorationScript::MoveDecorationAlongRail(float deltaTime)
{
	FVector currentPos = this->GetActorLocation();
	FVector movement = { 0, theTrain->currentMovementSpeed * -1 * deltaTime, 0 };

	FVector newPos = currentPos + movement;
	this->SetActorLocation(newPos);
}