// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../Stats/StatsCharacters.h"
#include "../PDA_Item.h"
#include "PDA_StatsEnemigo.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_StatsEnemigo : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats Enemigo")
		FText Nombre;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats Enemigo")
		FText Descripcion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats Enemigo")
		UStatsCharacters* Stats;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats Enemigo")
		int32 VidaInicial=100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats Enemigo")
		int32 MagiaInicial=100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats Enemigo")
		int32 Dinero=5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats Enemigo")
		TArray<UPDA_Item*> Items;

};
