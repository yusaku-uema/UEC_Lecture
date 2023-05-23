#pragma once

#include "CoreMinimal.h"
#include "CPPCalcType.h"
#include "CPPCalcInfo.generated.h"

USTRUCT(BlueprintType)
struct FCPPCalcInfo
{
	GENERATED_BODY()

		ECPPCalcType Type = ECPPCalcType::Add;
	int32 NumA = 7;
	int32 NumB = 3;
};