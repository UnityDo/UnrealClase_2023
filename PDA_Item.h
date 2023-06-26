// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Poderes/Poder.h"
#include "Engine/DataAsset.h"
#include "PDA_Item.generated.h"




UENUM(BlueprintType)
enum class ERareza : uint8 {
	Comun UMETA(DisplayName = "COMUN"),
	Raro UMETA(DisplayName = "RARO"),
	Epico UMETA(DisplayName = "EPICO"),
	Legendario UMETA(DisplayName = "LEGENDARIO")
};


/**
 * 
 */
UCLASS()
class TIPODIABLO_API UPDA_Item : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		FString Id;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		FText Nombre;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		FText Descripcion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		UTexture2D* Icono;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		int32 Valor;
	//Se puede poner una referencia suave
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		TSoftObjectPtr<UStaticMesh> SM_Item;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		ERareza rareza;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		bool bInventariable=true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
		TArray<TSubclassOf<UPoder>>TipoPoderes;
private:

protected:

};
