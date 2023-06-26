// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Armadura.h"
#include "PDA_Casco.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Casco : public UPDA_Armadura
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Casco")
		float ProteccionCabeza;
		
};
