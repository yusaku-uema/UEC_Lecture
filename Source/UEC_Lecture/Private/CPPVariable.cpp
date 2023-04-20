// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPVariable.h"
#include"Kismet/KismetSystemLibrary.h"
#include"Kismet/KismetStringLibrary.h" // ’Ç‰Á


// Called when the game starts or when spawneds
void ACPPVariable::BeginPlay()
{
	Super::BeginPlay();

	// •Ï”‚ğì¬‚·‚é
	FString Message = "C++ Hello World!";

	// Duration‚É•Ê‚Ì’l‚ğİ’è‚·‚é
	//Duration = 3.0f;

	UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);
	
}


