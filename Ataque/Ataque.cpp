// Fill out your copyright notice in the Description page of Project Settings.


#include "Ataque.h"

UWorld* UAtaque::GetWorld() const
{
	if (GetOuter() == nullptr)
	{
		return nullptr;
	}

	// Special case for behavior tree nodes in the editor
	if (Cast<UPackage>(GetOuter()) != nullptr)
	{
		// GetOuter should return a UPackage and its Outer is a UWorld
		return Cast<UWorld>(GetOuter()->GetOuter());
	}

	// In all other cases...
	return GetOuter()->GetWorld();

}

void UAtaque::Ataca_Implementation(ACharacter* CharacterRef)
{
}

float UAtaque::GetDuracion_Implementation()
{
	return Duracion;
}
