// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPTSet.generated.h"

UCLASS()
class UEC_LECTURE_API ACPPTSet : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	TArray<FString> Fruits = {
	TEXT("Apple"),
	TEXT("Lemon"),
	TEXT("Banana")
	};

	TArray<FString> Vegetables = {
	TEXT("Carrot"),
	TEXT("Tomato"),
	TEXT("Onion"),
	};

};
