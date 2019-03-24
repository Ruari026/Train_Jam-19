// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RhythmNoteScript.generated.h"

UCLASS()
class TRAINJAM_API ARhythmNoteScript : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARhythmNoteScript();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Spawnpoints
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector upSpawnPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector downSpawnPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector leftSpawnPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector rightSpawnPos;

	//Setting Visuals
	UFUNCTION(BlueprintImplementableEvent)
		void Spawningarrow();
	UFUNCTION(BlueprintCallable)
		void SetArrowType(FString newArrowType);
	UFUNCTION(BlueprintCallable)
		FString GetArrowType();
	UFUNCTION(BlueprintCallable)
		void SetArrowPos();
	FString arrowType;

	//Movement
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float moveSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
