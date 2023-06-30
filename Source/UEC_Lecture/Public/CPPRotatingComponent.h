// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CPPRotatingComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UEC_LECTURE_API UCPPRotatingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCPPRotatingComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
public:
	UPROPERTY(EditAnywhere, DisplayName = "Interval", Category = "Rotate Settings")
		float Interval = 0.01f;

	UPROPERTY(EditAnywhere, DisplayName = "Rot(X)", Category = "Rotate Settings")
		float RotX = 0.0f;

	UPROPERTY(EditAnywhere, DisplayName = "Rot(Y)", Category = "Rotate Settings")
		float RotY = 0.0f;

	UPROPERTY(EditAnywhere, DisplayName = "Rot(Z)", Category = "Rotate Settings")
		float RotZ = 0.0f;

	void RotateLoop();

private:
	FRotator OwnerRotation;


};
