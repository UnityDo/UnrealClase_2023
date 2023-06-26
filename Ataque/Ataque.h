// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AtaqueInterface.h"
#include "UObject/NoExportTypes.h"
#include "Ataque.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Category = "Ataque")
class TIPODIABLO_API UAtaque : public UObject, public  IAtaqueInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Ataque")
		UWorld* GetWorld()const;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ataque")
		float Danio;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ataque")
		float AreaEfecto;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ataque")
		float Duracion;


	void Ataca_Implementation(ACharacter* CharacterRef) override;
	float GetDuracion_Implementation() override;
};
