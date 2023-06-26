// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Item.h"
#include "PDA_Colocable.generated.h"



UENUM(BlueprintType)
enum class EPosicion : uint8 {
	Ninguno UMETA(DisplayName = "Ninguno"),
	Casco UMETA(DisplayName = "Casco"),
	Hombrera UMETA(DisplayName = "Hombrera"),
	Guantes UMETA(DisplayName = "Guantes"),
	AnilloD UMETA(DisplayName = "Anillo Derecho"),
	AnilloI UMETA(DisplayName = "Anillo Izquierdo"),
	Collar UMETA(DisplayName = "Collar"),
	Escudo UMETA(DisplayName = "Escudo"),
	Brazalete UMETA(DisplayName = "Brazalete"),
	Pantalones UMETA(DisplayName = "Pantalones"),
	Botas UMETA(DisplayName = "Botas"),
	Armas UMETA(DisplayName = "Armas")
};

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Colocable : public UPDA_Item
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colocable")
		EPosicion posicion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colocable")
		FString socketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Colocable")
		FTransform TransformCorrecion;
};
