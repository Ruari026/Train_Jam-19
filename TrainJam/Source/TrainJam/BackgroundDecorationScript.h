// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TrainMovementController.h"

#include "Engine.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BackgroundDecorationScript.generated.h"

UCLASS()
class TRAINJAM_API ABackgroundDecorationScript : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	ABackgroundDecorationScript();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Getting Train Information
	UPROPERTY(EditAnywhere)
		ATrainMovementController* theTrain;

	//Randomising Visuals
	UFUNCTION(BlueprintImplementableEvent)
		void RandomiseDecorationMaterial();

	//Handling the decoration movement
	void MoveDecorationAlongRail(float deltaTime);
	bool canMove;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
