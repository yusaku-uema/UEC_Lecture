// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h" 
#include "CPPComponent.generated.h" //絶対に下にする。(インクルードの一番下に)


UCLASS()
class UEC_LECTURE_API ACPPComponent : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACPPComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	// PrintString関数のDurationに設定する変数
	const float Duration = 10.0f;

	// PrintString関数のTextColorに設定する変数
	const FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0);

public:

	USceneComponent* DefaultSceneRoot;

	// StaticMesh Component //常に使うはずk
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
		UArrowComponent* Arrow;

};
