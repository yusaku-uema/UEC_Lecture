// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPCalcType.h"
#include "CPPFunction.generated.h"

UCLASS()
class UEC_LECTURE_API ACPPFunction : public AActor
{
	GENERATED_BODY()
	
private:
	// PrintStringŠÖ”‚ÌDuration‚Éİ’è‚·‚é•Ï”
	const float Duration = 10.0f;

	// PrintStringŠÖ”‚ÌTextColor‚Éİ’è‚·‚é•Ï”
	const FLinearColor TextColor = FColor(255, 255, 255);

	// ŒvZ—p‚Ì•Ï”
	int32 CalcVarA = 7;
	int32 CalcVarB = 3;

	// Flow Control—p‚Ì•Ï”
	bool IsPrintHello = false;
	ECPPCalcType CalcType = ECPPCalcType::Subtract;

public:
	int32 Sum(int32 A, int32 B);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
