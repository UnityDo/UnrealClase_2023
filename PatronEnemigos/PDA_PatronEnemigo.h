// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PDA_PatronEnemigo.generated.h"



USTRUCT(BlueprintType)
struct FEnemigoNumero
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigos Numero")
		int32 Numero;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigos Numero")
	TSubclassOf<AActor> ClaseEnemigo;
};
/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_PatronEnemigo : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo Patron")
		FString Nivel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo Patron")
		int32 NumeroNivel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo Patron")
	TArray<FEnemigoNumero> EnemigoNumeros;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemigo Patron")
	TArray<FTransform> Posiciones;
};
