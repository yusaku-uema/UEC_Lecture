// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPStatic.generated.h"

UCLASS()
class UEC_LECTURE_API ACPPStatic : public AActor
{
	GENERATED_BODY()
	
public:
	// �ÓI�����o�ϐ�
	static int staticPoint;

	// �ʏ�̃����o�ϐ�
	int normalPoint;

	// static�����o�֐�
	static void SetPoint(int myPoint);

};
