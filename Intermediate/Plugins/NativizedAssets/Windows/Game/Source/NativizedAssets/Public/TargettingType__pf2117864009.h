#pragma once
#include "TargettingType__pf2117864009.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/TargettingType.TargettingType", OverrideNativeName="TargettingType", EnumDisplayNameFn="E__TargettingType__pf__GetUserFriendlyName") )
enum class E__TargettingType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(OverrideName = "TargettingType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(OverrideName = "TargettingType::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(OverrideName = "TargettingType::NewEnumerator2"),
	NewEnumerator3 = 3 UMETA(OverrideName = "TargettingType::NewEnumerator3"),
	E__TargettingType__pf_MAX = 4 UMETA(OverrideName = "TargettingType::TargettingType_MAX"),
};
FText E__TargettingType__pf__GetUserFriendlyName(int32 InValue);
