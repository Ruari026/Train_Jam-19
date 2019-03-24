// Fill out your copyright notice in the Description page of Project Settings.

#include "TrainMovementController.h"

// Sets default values
ATrainMovementController::ATrainMovementController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATrainMovementController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATrainMovementController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (canMove)
	{
		currentMovementSpeed += DeltaTime * 150;
		if (currentMovementSpeed > maxMovementSpeed)
		{
			currentMovementSpeed = maxMovementSpeed;
		}
	}
}

