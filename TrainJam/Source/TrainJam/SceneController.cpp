// Fill out your copyright notice in the Description page of Project Settings.

#include "SceneController.h"

// Sets default values
ASceneController::ASceneController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
// Called when the game starts or when spawned
void ASceneController::BeginPlay()
{
	Super::BeginPlay();
	
}
// Called to bind functionality to input
void ASceneController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
// Called every frame
void ASceneController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunDecorationSpawnTimer(DeltaTime);
}


/*
====================================================================================================
Controlling The Game State
====================================================================================================
*/
void ASceneController::SetGameState(GameState newGameState)
{
	currentGameState = newGameState;
}


/*
====================================================================================================
Controlling The Player Camera
====================================================================================================
*/
void ASceneController::ZoomCamera()
{
	if (isZoomedIn)
	{
		this->SetActorLocationAndRotation(zoomedOutPos, zoomedOutRot);
		isZoomedIn = false;
	}
	else
	{
		this->SetActorLocationAndRotation(zoomedInPos, zoomedInRot);
		isZoomedIn = true;
	}
}


/*
====================================================================================================
Controlling The Rhythm Controller
====================================================================================================
*/
APlayerRhythmController* ASceneController::GetPlayerRhythmController()
{
	return theRhythmController;
}


/*
====================================================================================================
Spawning Decoration Prefabs
====================================================================================================
*/
void ASceneController::RunDecorationSpawnTimer(float deltaTime)
{
	if (currentSpawnTimer <= 0)
	{
		ABackgroundDecorationScript* newPrefab = GetWorld()->SpawnActor<ABackgroundDecorationScript>(backgroundDecorationPrefab);
		newPrefab->SetDecorationRail();
		newPrefab->RandomiseDecorationMaterial();

		currentSpawnTimer = FMath::RandRange(minSpawnTimer, maxSpawnTimer);
	}
	else
	{
		currentSpawnTimer -= deltaTime;
	}
}