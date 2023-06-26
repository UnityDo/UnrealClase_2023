// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Components/BoxComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "ActorConstruido.generated.h"


UCLASS()
class TIPODIABLO_API AActorConstruido : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorConstruido();
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* MiMesh;
	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CollisionBox;
	UPROPERTY(VisibleAnywhere)
		UPointLightComponent* MiPointLight;
	UPROPERTY(VisibleAnywhere)
		UAudioComponent* MiAudio;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
