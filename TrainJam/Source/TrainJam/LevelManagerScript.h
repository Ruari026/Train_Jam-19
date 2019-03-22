// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerCameraController.h"
#include "LevelManagerScript.generated.h"

UCLASS()
class TRAINJAM_API ALevelManagerScript : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALevelManagerScript();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		APlayerCameraController* playerCamera;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};



