// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RhythmNoteScript.h"

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
	UPROPERTY(EditAnywhere)
	FString inputType;
	UFUNCTION(BlueprintCallable)
		void PlayerInput(FString direction);
	UFUNCTION(BlueprintCallable)
		FString GetInputType();
	UFUNCTION(BlueprintImplementableEvent)
		void InputEvent();

	//SongDetails
	UPROPERTY(EditAnywhere)
		TArray<float> spawnTimes;
	UPROPERTY(EditAnywhere)
		TArray<FString> spawnArrows;
	float currentTime = 0;
	int nextSpawn = 0;
	bool isPlaying = false;

	//Spawning Notes
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf< ARhythmNoteScript> rhythmNotePrefab;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector spawnPointUp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector spawnPointDown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector spawnPointLeft;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector spawnPointRight;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
