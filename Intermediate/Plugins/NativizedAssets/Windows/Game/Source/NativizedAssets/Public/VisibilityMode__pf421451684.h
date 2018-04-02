#pragma once
#include "VisibilityMode__pf421451684.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/ExampleMap/Blueprints/VisibilityMode.VisibilityMode", OverrideNativeName="VisibilityMode", EnumDisplayNameFn="E__VisibilityMode__pf__GetUserFriendlyName") )
enum class E__VisibilityMode__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "AlwaysVisible",OverrideName = "VisibilityMode::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "HiddenInFOW",OverrideName = "VisibilityMode::NewEnumerator1"),
	NewEnumerator2 = 2 UMETA(DisplayName = "HiddenUntilDiscovered",OverrideName = "VisibilityMode::NewEnumerator2"),
	E__VisibilityMode__pf_MAX = 3 UMETA(OverrideName = "VisibilityMode::VisibilityMode_MAX"),
};
FText E__VisibilityMode__pf__GetUserFriendlyName(int32 InValue);
