// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Arma.h"
#include "PDA_Ballesta.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Ballesta : public UPDA_Arma
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ballesta")
		float Alcance = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ballesta")
		float TiempoRecarga = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ballesta")
		float BonusApuntar = 10;
};
