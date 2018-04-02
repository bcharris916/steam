#pragma once
#include "AttackKeys__pf2117864009.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/AttackKeys.AttackKeys", OverrideNativeName="AttackKeys", EnumDisplayNameFn="E__AttackKeys__pf__GetUserFriendlyName") )
enum class E__AttackKeys__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "AttackKeys::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "AttackKeys::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "AttackKeys::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "AttackKeys::NewEnumerator3"),
	E__AttackKeys__pf_MAX = 4 UMETA(OverrideName = "AttackKeys::AttackKeys_MAX"),
};
FText E__AttackKeys__pf__GetUserFriendlyName(int32 InValue);
