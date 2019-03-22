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
	this->SetDecorationRail();
	
}

// Called every frame
void ABackgroundDecorationScript::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	MoveDecorationAlongRail(DeltaTime);
}


/*
====================================================================================================
Handling Setting The Spawn Position & Move Speed
====================================================================================================
*/
void ABackgroundDecorationScript::SetDecorationRail()
{
	//Randomly chosing what rail to use
	int r = FMath::RandRange(0, 2);
	FString s = FString::FromInt(r);
	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, s);

	//Placing the decoration at the rail start
	this->SetActorLocation(railStartPoints[r]);

	//Setting the relevant move speed
	moveSpeed = railSpeeds[r];

	//Setting a relevant texture
}


/*
====================================================================================================
Handling the decoration movement
====================================================================================================
*/
void ABackgroundDecorationScript::MoveDecorationAlongRail(float deltaTime)
{
	FVector currentPos = this->GetActorLocation();
	FVector movement = { 0, moveSpeed * deltaTime, 0 };

	FVector newPos = currentPos + movement;
	this->SetActorLocation(newPos);
}