// Fill out your copyright notice in the Description page of Project Settings.

#include "SceneController.h"

// Sets default values
ASceneController::ASceneController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASceneController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASceneController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (decorationTimerCurrent <= 0)
	{
		//Spawning decoration
		UWorld* theWorld = GetWorld();
		FVector location = GetActorLocation();
		FRotator rotation = GetActorRotation();
		theWorld->SpawnActor(decorationPrefab, &location, &rotation);

		//Resetting the timer
		decorationTimerCurrent = FMath::RandRange(decorationTimerMin, decorationTimerMax);
	}
	else
	{
		decorationTimerCurrent -= DeltaTime;
	}
}

