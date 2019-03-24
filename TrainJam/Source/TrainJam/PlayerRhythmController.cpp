// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerRhythmController.h"

// Sets default values
APlayerRhythmController::APlayerRhythmController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerRhythmController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerRhythmController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isPlaying)
	{
		currentTime += DeltaTime;

		if (nextSpawn < spawnTimes.Num())

		if (currentTime >= spawnTimes[nextSpawn])
		{
			ARhythmNoteScript* newActor = GetWorld()->SpawnActor<ARhythmNoteScript>(rhythmNotePrefab);
			newActor->SetArrowType(spawnArrows[nextSpawn]);
			newActor->Spawningarrow();

			nextSpawn++;
		}
	}
}


/*
====================================================================================================
Player Input
====================================================================================================
*/
void APlayerRhythmController::PlayerInput(FString direction)
{
	inputType = direction;
	InputEvent();
}

FString APlayerRhythmController::GetInputType()
{
	return inputType;
}