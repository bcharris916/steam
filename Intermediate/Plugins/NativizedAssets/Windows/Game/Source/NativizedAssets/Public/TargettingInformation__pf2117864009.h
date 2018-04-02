#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "TargettingInformation__pf2117864009.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/TargettingInformation.TargettingInformation", OverrideNativeName="TargettingInformation"))
struct FTargettingInformation__pf2117864009
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="range", Tooltip, OverrideNativeName="range_7_81FC55BF49882F8D1FB86FAAD4597D8E"))
	int32 bpv__range_7_81FC55BF49882F8D1FB86FAAD4597D8E__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="targettingType", Tooltip, OverrideNativeName="targettingType_8_EDED180A43CCE0FF7F71B2AF7A2CA28C"))
	uint8 bpv__targettingType_8_EDED180A43CCE0FF7F71B2AF7A2CA28C__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="magnitude", Tooltip, OverrideNativeName="magnitude_9_A24B2EE1445EF94555941CAFBDBD23E4"))
	int32 bpv__magnitude_9_A24B2EE1445EF94555941CAFBDBD23E4__pf;
	static FTargettingInformation__pf2117864009 GetDefaultValue();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FTargettingInformation__pf2117864009& __Other) const
	{
		return FTargettingInformation__pf2117864009::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FTargettingInformation__pf2117864009& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FTargettingInformation__pf2117864009::StaticStruct()); }
};
