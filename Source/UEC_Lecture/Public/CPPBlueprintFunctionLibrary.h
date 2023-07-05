// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CPPBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UEC_LECTURE_API UCPPBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "CPPBlueprintFunctionLibrary")
		static void PrintHello();
public:
	UFUNCTION(BlueprintCallable, Category = "CPPBlueprintFunctionLibrary", BlueprintPure)
		static int Sum(const int A, const int B);

	UFUNCTION(BlueprintCallable, BlueprintPure)
	static int yusaku(const int A, const int B);


	UPROPERTY(VisibleDefaultsOnly)
		int yusaku_a;

};
