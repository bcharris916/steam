#pragma once
#include "DamageType__pf2117864009.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/DamageType.DamageType", OverrideNativeName="DamageType", EnumDisplayNameFn="E__DamageType__pf__GetUserFriendlyName") )
enum class E__DamageType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "DamageType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "DamageType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "DamageType::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "DamageType::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "DamageType::NewEnumerator4"),
	NewEnumerator5 = 5 UMETA(OverrideName = "DamageType::NewEnumerator5"),
	NewEnumerator6 = 6 UMETA(OverrideName = "DamageType::NewEnumerator6"),
	E__DamageType__pf_MAX = 7 UMETA(OverrideName = "DamageType::DamageType_MAX"),
};
FText E__DamageType__pf__GetUserFriendlyName(int32 InValue);
