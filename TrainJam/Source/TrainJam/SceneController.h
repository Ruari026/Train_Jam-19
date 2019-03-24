// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TrainMovementController.h"
#include "BackgroundDecorationScript.h"
#include "PlayerRhythmController.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SceneController.generated.h"

UENUM(BlueprintType)
enum class GameState : uint8
{
	MENU,
	RHYTHM,
	PAUSED
};

UCLASS()
class TRAINJAM_API ASceneController : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASceneController();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Controlling the game state
	GameState currentGameState;
	UFUNCTION(BlueprintCallable)
		void SetGameState(GameState newGameState);
	UFUNCTION(BlueprintCallable)
		void StartGame();
	
	//Handling train controller
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ATrainMovementController* theTrain;

	//Controlling the player camera
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector zoomedInPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator zoomedInRot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector zoomedOutPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FRotator zoomedOutRot;
	UFUNCTION(BlueprintCallable)
		void ZoomCamera(bool zoomingIn);

	//Spawning Scene Decorations
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ABackgroundDecorationScript> background1DecorationPrefab;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ABackgroundDecorationScript> background2DecorationPrefab;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<ABackgroundDecorationScript> background3DecorationPrefab;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float maxSpawnTimer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float minSpawnTimer;
	float currentSpawnTimer;
	UPROPERTY(EditAnywhere)
		FVector railStartPoints[3];
	void RunDecorationSpawnTimer(float deltaTime);

	//Controlling the rhythm controller
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		APlayerRhythmController* theRhythmController;
	UFUNCTION(BlueprintCallable)
		APlayerRhythmController* GetPlayerRhythmController();

	//Other
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		ABackgroundDecorationScript* startStation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
