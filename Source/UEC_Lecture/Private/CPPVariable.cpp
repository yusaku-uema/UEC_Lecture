// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPVariable.h"
#include"Kismet/KismetSystemLibrary.h"
#include"Kismet/KismetStringLibrary.h" // �ǉ�


// Called when the game starts or when spawneds
void ACPPVariable::BeginPlay()
{
	Super::BeginPlay();

	// �ϐ����쐬����
	FString Message = "C++ Hello World!";

	// Duration�ɕʂ̒l��ݒ肷��
	//Duration = 3.0f;

	UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);
	
}


