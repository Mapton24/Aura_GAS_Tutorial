// Copyright Mapton

#pragma once

#include "CoreMinimal.h"
#include "AuraCharacterBase.h"
#include "Aura/Interaction/PlayerInterface.h"
#include "AuraCharacter.generated.h"


class USpringArmComponent;
class UCameraComponent;
class AAuraPlayerState;
/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase, public IPlayerInterface
{
	GENERATED_BODY()

	AAuraCharacter();

	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	
	/** Player Interface */
	virtual void AddToXP_Implementation(int32 InXP) override;
	virtual void LevelUp_Implementation() override;
	/** end Combat Interface */
	/** Combat Interface */
	virtual int32 GetPlayerLevel_Implementation() override;
	/** end Combat Interface */


private:
	virtual void InitAbilityActorInfo() override;


protected:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* MainCamera;

	UPROPERTY()
	AAuraPlayerState* AuraPlayerState;
	
};

