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

	if (currentGameState == GameState::RHYTHM)
	{
		RunDecorationSpawnTimer(DeltaTime);
	}
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

void ASceneController::StartGame()
{
	currentGameState = GameState::RHYTHM;
	theTrain->canMove = true;
	theRhythmController->isPlaying = true;

	ZoomCamera(false);
}


/*
====================================================================================================
Controlling The Player Camera
====================================================================================================
*/
void ASceneController::ZoomCamera(bool zoomingIn)
{
	if (zoomingIn)
	{
		this->SetActorLocationAndRotation(zoomedInPos, zoomedInRot);
	}
	else
	{
		this->SetActorLocationAndRotation(zoomedOutPos, zoomedOutRot);
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
		int r = FMath::RandRange(0, 2);
		switch (r)
		{
			case(0):
			{
				ABackgroundDecorationScript* newPrefab = GetWorld()->SpawnActor<ABackgroundDecorationScript>(background1DecorationPrefab);
				newPrefab->RandomiseDecorationMaterial();
				newPrefab->SetActorLocation(railStartPoints[r]);
				newPrefab->theTrain = this->theTrain;
			}
			break;

			case(1):
			{
				ABackgroundDecorationScript* newPrefab = GetWorld()->SpawnActor<ABackgroundDecorationScript>(background2DecorationPrefab);
				newPrefab->RandomiseDecorationMaterial();
				newPrefab->SetActorLocation(railStartPoints[r]);
				newPrefab->theTrain = this->theTrain;
			}
			break;

			case(2):
			{
				ABackgroundDecorationScript* newPrefab = GetWorld()->SpawnActor<ABackgroundDecorationScript>(background3DecorationPrefab);
				newPrefab->RandomiseDecorationMaterial();
				newPrefab->SetActorLocation(railStartPoints[r]);
				newPrefab->theTrain = this->theTrain;
			}
			break;
		}
		

		currentSpawnTimer = FMath::RandRange(minSpawnTimer, maxSpawnTimer);
	}
	else
	{
		currentSpawnTimer -= deltaTime;
	}
}