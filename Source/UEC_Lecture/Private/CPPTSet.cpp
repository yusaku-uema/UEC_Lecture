// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPTSet.h"
#include "Kismet/KismetSystemLibrary.h"

// Called when the game starts or when spawned
void ACPPTSet::BeginPlay()
{
	Super::BeginPlay();

	//// 追加する
	//FruitSet.Add(TEXT("Orange"));

	//// 削除する
	//FruitSet.Remove(TEXT("Apple"));

	Fruits.Insert(TEXT("Orange"), 1);

	// 配列を追加
	Fruits.Append(Vegetables);

	// 配列を追加
	Fruits += Vegetables;

	// TSetの中身を出力する
	for (FString Elem : Fruits)
	{
		UKismetSystemLibrary::PrintString(
			this
			,FString::Printf(TEXT("Value : %s"), *Elem)
			, true
			, true
			, FColor::Cyan
			, 10.0f);
	}
}