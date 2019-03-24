// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TrainMovementController.generated.h"

UCLASS()
class TRAINJAM_API ATrainMovementController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrainMovementController();
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	//TrainAnimations
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool canMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float maxMovementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float currentMovementSpeed;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
