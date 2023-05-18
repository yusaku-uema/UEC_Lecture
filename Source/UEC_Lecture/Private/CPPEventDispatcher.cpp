// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPEventDispatcher.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"

ACPPEventDispatcher::ACPPEventDispatcher()
{
	// Event Dispathcer[OnPrintHello]��Custom Event[PrintHello]���o�C���h����
	OnPrintHello.AddDynamic(this, &ACPPEventDispatcher::PrintHello);
}

int32 ACPPEventDispatcher::Sum(int32 A, int32 B)
{
	return A + B;
}

// Called when the game starts or when spawned
void ACPPEventDispatcher::BeginPlay()
{
	SetupInput();

	if (IsPrintHello)
	{
		// PrintString�m�[�h�Ɠ�������
		// UKismetSystemLibrary�N���X��PrintString�֐����Ăяo��
		UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);
	}
	else
	{
		// �v�Z���ʂ��o�͂��鏈��
		PrintCalcResult(CalcType, CalcVarA, CalcVarB, Duration);
	}
}

void ACPPEventDispatcher::PrintCalcResult(const ECPPCalcType Type, const int32 A, const int32 B, const float PrintDuration)
{
	switch (Type)
	{
	case ECPPCalcType::Add:
	{
		// Add(�����Z)�̏���
		int32 ResultAdd = Sum(CalcVarA, CalcVarB);
		FString StrResultAdd = FString::Printf(TEXT("%d"), ResultAdd);
		UKismetSystemLibrary::PrintString(this, StrResultAdd, true, true, FColor::Red, Duration);
		break;
	}
	case ECPPCalcType::Subtract:
	{
		// Subtract(�����Z)�̏���
		int32 ResultSubtract = CalcVarA - CalcVarB;
		FString StrResultSubtract = FString::Printf(TEXT("%d"), ResultSubtract);
		UKismetSystemLibrary::PrintString(this, StrResultSubtract, true, true, FColor::Yellow, Duration);
		break;
	}
	case ECPPCalcType::Multiply:
	{
		// Multiply(�|���Z)�̏���
		int32 ResultMultiply = CalcVarA * CalcVarB;
		FString StrResultMultiply = FString::Printf(TEXT("%d"), ResultMultiply);
		UKismetSystemLibrary::PrintString(this, StrResultMultiply, true, true, FColor::Green, Duration);
		break;
	}
	case ECPPCalcType::Divide:
	{
		// Divide(����Z)�̏���
		float ResultDivide = (float)CalcVarA / (float)CalcVarB;
		FString StrResultDivide = FString::Printf(TEXT("%f"), ResultDivide);
		UKismetSystemLibrary::PrintString(this, StrResultDivide, true, true, FColor::Blue, Duration);
		break;
	}
	}
}

void ACPPEventDispatcher::SetupInput()
{
	// ���͂�L���ɂ���
	EnableInput(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	// H�L�[��Pressed��Released���o�C���h����
	InputComponent->BindKey(EKeys::H, IE_Pressed, this, &ACPPEventDispatcher::PressedH);

	//InputComponent->BindKey(EKeys::H, IE_Released, this, &ACPPEventDispatcher::ReleasedH);

	//�A�N�V�����}�b�s���O
	// ActionMappings�ɐݒ肵��Action���o�C���h����
	InputComponent->BindAction("Jump", IE_Pressed, this, &ACPPEventDispatcher::PressedActionPrintCalcResult);
}

void ACPPEventDispatcher::PressedH()
{
	//// Hello World!���o�͂��鏈��
	//UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);

	// Event Dispathcer[OnPrintHello]���R�[������
	OnPrintHello.Broadcast();
}

void ACPPEventDispatcher::PressedActionPrintCalcResult()
{
	// �v�Z���ʂ��o�͂��鏈��
	PrintCalcResult(CalcType, CalcVarA, CalcVarB, Duration);
}

void ACPPEventDispatcher::PrintHello()
{
	// Hello World!���o�͂��鏈��
	UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);
}