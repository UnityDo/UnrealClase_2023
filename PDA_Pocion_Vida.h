// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Pocion.h"
#include "PDA_Pocion_Vida.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Pocion_Vida : public UPDA_Pocion
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pocion Vida")
		FText TextoPocionVida;
};
