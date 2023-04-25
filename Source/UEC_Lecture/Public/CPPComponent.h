// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/ArrowComponent.h" 
#include "CPPComponent.generated.h" //��΂ɉ��ɂ���B(�C���N���[�h�̈�ԉ���)


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
	// PrintString�֐���Duration�ɐݒ肷��ϐ�
	const float Duration = 10.0f;

	// PrintString�֐���TextColor�ɐݒ肷��ϐ�
	const FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0);

public:

	USceneComponent* DefaultSceneRoot;

	// StaticMesh Component //��Ɏg���͂�k
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere)
		UArrowComponent* Arrow;

};
