// Copyright Mapton

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelUpInfo.generated.h"

USTRUCT()
struct FAuraLevelUpInfo
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	int32 LevelUpRequirement = 0;
	UPROPERTY(EditDefaultsOnly)
	int32 AttributePointReward = 1;
	UPROPERTY(EditDefaultsOnly)
	int32 SpellPointReward = 1;
};
/**
 * 
 */
UCLASS()
class AURA_API ULevelUpInfo : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FAuraLevelUpInfo> LevelUpInformation;

	int32 FindLevelForExp(int32 XP) const;
};
