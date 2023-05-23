// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPClassBase.generated.h"

UCLASS()
class UEC_LECTURE_API ACPPClassBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPPClassBase();

	// Scene Component
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaultSceneRoot;

	// StaticMesh Component
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;

	// 親クラスのメンバ関数 
	void CallParentFunc();

	// 親クラスのデータメンバ
	int VarParentNum = 10;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
