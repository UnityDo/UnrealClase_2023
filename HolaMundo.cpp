// Fill out your copyright notice in the Description page of Project Settings.


#include "HolaMundo.h"

// Sets default values
AHolaMundo::AHolaMundo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SuperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Super Mesh"));

}

void AHolaMundo::ImprimeVida()
{
	UE_LOG(LogTemp, Warning, TEXT("Vida que tal : %f"), vida);

}

// Called when the game starts or when spawned
void AHolaMundo::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Hola que tal"));
	UE_LOG(LogTemp, Warning, TEXT("Your Message"));
	float MyFloat = 1;
	FString MyString = FString(TEXT("This is my test FString."));
	UE_LOG(LogTemp, Warning, TEXT("Float : %f | String : %s"), MyFloat, *MyString);

}

// Called every frame
void AHolaMundo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

