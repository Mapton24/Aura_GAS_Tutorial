// Copyright Mapton

#pragma once

#include "CoreMinimal.h"
#include "AuraGameplayAbility.h"
#include "AuraSummonAbility.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraSummonAbility : public UAuraGameplayAbility
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	TArray<FVector> GetSpawnLocations();

	UPROPERTY(EditDefaultsOnly, Category = "Summoning")
	int32 NumMinions = 5;

	UPROPERTY(EditAnywhere, Category = "Summoning")
	TArray<TSubclassOf<APawn>> MinionClasses;
	UPROPERTY(EditAnywhere, Category = "Summoning")
	float MinSpawnDistance = 50.f;
	UPROPERTY(EditAnywhere, Category = "Summoning")
	float MaxSpawnDistance = 250.f;
	UPROPERTY(EditAnywhere, Category = "Summoning")
	float SpawnSpread = 90.f;
};
