// Fill out your copyright notice in the Description page of Project Settings.

#include "RhythmNoteScript.h"

// Sets default values
ARhythmNoteScript::ARhythmNoteScript()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARhythmNoteScript::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARhythmNoteScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Moving the note
	FVector currentPos = this->GetActorLocation();

	if (currentPos.Y <= -650)
	{
		Destroy();
	}
	else
	{
		FVector movement = { 0, moveSpeed * DeltaTime, 0 };
		FVector newPos = currentPos + movement;
		this->SetActorLocation(newPos);
	}
}


/*
====================================================================================================
Spawning Arrow
====================================================================================================
*/
void ARhythmNoteScript::SetArrowType(FString newArrowType)
{
	arrowType = newArrowType;
}

FString ARhythmNoteScript::GetArrowType()
{
	return arrowType;
}

void ARhythmNoteScript::SetArrowPos()
{
	if (arrowType == "Up")
	{
		SetActorLocation(upSpawnPos);
	}
	else if (arrowType == "Down")
	{
		SetActorLocation(downSpawnPos);
	}
	else if(arrowType == "Left")
	{
		SetActorLocation(leftSpawnPos);
	}
	else if(arrowType == "Right")
	{
		SetActorLocation(rightSpawnPos);
	}
}