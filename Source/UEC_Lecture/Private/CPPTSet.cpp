// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPTSet.h"
#include "Kismet/KismetSystemLibrary.h"

// Called when the game starts or when spawned
void ACPPTSet::BeginPlay()
{
	Super::BeginPlay();

	//// �ǉ�����
	//FruitSet.Add(TEXT("Orange"));

	//// �폜����
	//FruitSet.Remove(TEXT("Apple"));

	Fruits.Insert(TEXT("Orange"), 1);

	// �z���ǉ�
	Fruits.Append(Vegetables);

	// �z���ǉ�
	Fruits += Vegetables;

	// TSet�̒��g���o�͂���
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