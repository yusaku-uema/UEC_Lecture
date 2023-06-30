// Fill out your copyright notice in the Description page of Project Settings.

#include "CPPInterfaceTest.h"
#include "Kismet/KismetSystemLibrary.h"
#include <CPPArray.cpp>


// Called when the game starts or when spawned
void ACPPInterfaceTest::BeginPlay()
{
	Super::BeginPlay();

	PrintHello();

	UKismetSystemLibrary::PrintString(this, FString::Printf(TEXT("Add(1+2)= %d"), Add(1, 2)), true, true, FColor::Cyan, 10.f);

}
