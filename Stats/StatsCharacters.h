// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StatsCharacters.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UStatsCharacters : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int32 Fuerza=10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int32 Destreza=10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int32 Constitucion=10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int32 Inteligencia=10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int32 Sabiduria=10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		int32 Carisma=10;

};
