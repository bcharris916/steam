#pragma once
#include "MovementType__pf2117864009.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/MovementType.MovementType", OverrideNativeName="MovementType", EnumDisplayNameFn="E__MovementType__pf__GetUserFriendlyName") )
enum class E__MovementType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "MovementType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "MovementType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "MovementType::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "MovementType::NewEnumerator3"),
	NewEnumerator4 = 4 UMETA(OverrideName = "MovementType::NewEnumerator4"),
	NewEnumerator5 = 5 UMETA(OverrideName = "MovementType::NewEnumerator5"),
	NewEnumerator6 = 6 UMETA(OverrideName = "MovementType::NewEnumerator6"),
	E__MovementType__pf_MAX = 7 UMETA(OverrideName = "MovementType::MovementType_MAX"),
};
FText E__MovementType__pf__GetUserFriendlyName(int32 InValue);
