// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HolaMundo.generated.h"

UCLASS()
class TIPODIABLO_API AHolaMundo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHolaMundo();
	UPROPERTY(EditAnywhere, Category = "Vidas")
		float vida;

	UFUNCTION(BlueprintCallable)
		void ImprimeVida();
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SuperMesh;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
