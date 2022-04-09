#pragma once

#include "OTH_CoreTypes.generated.h"

UENUM(BlueprintType)
enum class EHeroElement : uint8
{
	None,
	Water,
	Fire,
	Wind,
	Earth,
	Light,
	Dark,
	Max
};

UENUM(BlueprintType)
enum class EHeroClass : uint8
{
	None,
	Emperor,
	Scholar,
	Specialist,
	Assassin,
	Priest,
	Max
};
