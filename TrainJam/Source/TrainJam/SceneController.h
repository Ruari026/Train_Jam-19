// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/World.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BackgroundDecorationScript.h"
#include "SceneController.generated.h"

UCLASS()
class TRAINJAM_API ASceneController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASceneController();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Handling Spawning Decorations
	//Spawn Timer
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float decorationTimerMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float decorationTimerMin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float decorationTimerCurrent;
	//Spawning Prefab
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> decorationPrefab;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
