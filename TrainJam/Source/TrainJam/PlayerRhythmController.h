// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerRhythmController.generated.h"

UCLASS()
class TRAINJAM_API APlayerRhythmController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerRhythmController();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Player Input
	UFUNCTION(BlueprintCallable)
		void PlayerInput(FString direction);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
