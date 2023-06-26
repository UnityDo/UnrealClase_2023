// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Poderes/Poder.h"
#include "Engine/DataAsset.h"
#include "Magia.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UMagia : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magia")
		FString Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magia")
		FText Nombre;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magia")
		FText Descripcion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magia")
		UTexture2D* Icono;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magia")
		int32 Coste;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magia")
		int32 TiempoRecarga;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Magia")
		TArray<TSubclassOf<UPoder>>Magias;
	
};
