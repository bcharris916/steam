#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "TimingInformation__pf2117864009.h"
class UObject;
#include "Ability__pf2117864009.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/Ability.Ability", OverrideNativeName="Ability"))
struct FAbility__pf2117864009
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Attacks", Tooltip, OverrideNativeName="Attacks_2_9C31B0C24269341C4A9153BE508B6BDB"))
	UObject* bpv__Attacks_2_9C31B0C24269341C4A9153BE508B6BDB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="timingInformation", Tooltip, OverrideNativeName="timingInformation_6_1F56DB5249639E58C9737999DC21395F"))
	FTimingInformation__pf2117864009 bpv__timingInformation_6_1F56DB5249639E58C9737999DC21395F__pf;
	static FAbility__pf2117864009 GetDefaultValue();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FAbility__pf2117864009& __Other) const
	{
		return FAbility__pf2117864009::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FAbility__pf2117864009& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FAbility__pf2117864009::StaticStruct()); }
};
