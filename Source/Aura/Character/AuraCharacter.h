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
	virtual int32 GetXP_Implementation() const override;
	virtual int32 FindLevelForXP_Implementation(int32 InXP) const override;
	virtual int32 GetAttributePointsReward_Implementation(int32 Level) const override;
	virtual int32 GetSpellPointsReward_Implementation(int32 Level) const override;
	virtual void AddToPlayerLevel_Implementation(int32 InPlayerLevel) override;
	virtual void AddToAttributePoints_Implementation(int32 InAttributePoints) override;
	virtual void AddToSpellPoints_Implementation(int32 InSpellPoints) override;
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

	// //This might not be a good idea to make a pointer out of it, can't const implementations if I want to use it
	// UPROPERTY()
	// AAuraPlayerState* AuraPlayerState;
	
};

