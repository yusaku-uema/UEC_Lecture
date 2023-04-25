// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPComponent.h"
#include "Kismet/KismetSystemLibrary.h"



ACPPComponent::ACPPComponent()
{
	// SceneComponent��RootComponent�ɐݒ肷��B
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

	// SceneComponent��RootComponent�ɐݒ肷��
	RootComponent = DefaultSceneRoot;

	// StaticMeshComponent���쐬����
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	// StaticMesh��Laod����StaticMeshComponent��StaticMesh�ɐݒ肷��
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(NULL, TEXT("/Engine/BasicShapes/Cube1"), NULL, LOAD_None, NULL);
	StaticMesh->SetStaticMesh(Mesh);

	// StaticMeshComponent��RootComponent��Attach����
	StaticMesh->SetupAttachment(RootComponent);

	// ArrowComponent���쐬����
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));

	// ArrowComponent�̈ʒu��ݒ肷��
	Arrow->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

	// ArrowComponent��StaticMeshComponent��Attach����
	Arrow->SetupAttachment(StaticMesh);
}



// Called when the game starts or when spawned
void ACPPComponent::BeginPlay()
{
	Super::BeginPlay();
	
	// �ϐ����쐬����
	FString Message = "C++ Hello World!";

	// PrintString�m�[�h�Ɠ�������
	// UKismetSystemLibrary�N���X��PrintString�֐����Ăяo��
	UKismetSystemLibrary::PrintString(this,Message,true,true,TextColor,Duration);
	
}

