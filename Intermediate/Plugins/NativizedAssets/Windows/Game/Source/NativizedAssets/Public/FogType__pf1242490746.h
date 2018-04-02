#pragma once
#include "FogType__pf1242490746.generated.h"
UENUM(BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/Blueprints/FogType.FogType", OverrideNativeName="FogType", EnumDisplayNameFn="E__FogType__pf__GetUserFriendlyName") )
enum class E__FogType__pf  : uint8
{
	NewEnumerator0 = 0 UMETA(DisplayName = "Opaque",OverrideName = "FogType::NewEnumerator0"),
	NewEnumerator1 = 1 UMETA(DisplayName = "Transparent",OverrideName = "FogType::NewEnumerator1"),
	E__FogType__pf_MAX = 2 UMETA(OverrideName = "FogType::FogType_MAX"),
};
FText E__FogType__pf__GetUserFriendlyName(int32 InValue);
