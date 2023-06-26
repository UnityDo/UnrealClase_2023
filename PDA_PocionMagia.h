// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PDA_Pocion.h"
#include "PDA_PocionMagia.generated.h"

/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_PocionMagia : public UPDA_Pocion
{
	GENERATED_BODY()
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pocion Magia")
		FText TextoPocionMagia;
};
