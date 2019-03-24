// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

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

	//Handling Setting The Spawn Position & Move Speed
	UPROPERTY(EditAnywhere)
		FVector railStartPoints[3];
	UPROPERTY(EditAnywhere)
		float railSpeeds[3];
	void SetDecorationRail();

	//Randomising Visuals
	UFUNCTION(BlueprintImplementableEvent)
		void RandomiseDecorationMaterial();

	//Handling the decoration movement
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float moveSpeed;
	void MoveDecorationAlongRail(float deltaTime);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
