#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class UPaperSprite;
#include "TimingInformation__pf2117864009.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/TimingInformation.TimingInformation", OverrideNativeName="TimingInformation"))
struct FTimingInformation__pf2117864009
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="timeOfLastAttack", Tooltip, OverrideNativeName="timeOfLastAttack_2_1236293D47BFC020411FEBBE15A6F146"))
	float bpv__timeOfLastAttack_2_1236293D47BFC020411FEBBE15A6F146__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="cooldown", Tooltip, OverrideNativeName="cooldown_6_DBFB52404372C50EC4CD52BBBBD9B019"))
	float bpv__cooldown_6_DBFB52404372C50EC4CD52BBBBD9B019__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="delayToLethal", Tooltip, OverrideNativeName="delayToLethal_9_F14D70274DBB119E6943F3AEE6E44714"))
	float bpv__delayToLethal_9_F14D70274DBB119E6943F3AEE6E44714__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="delayToInitialWarning", Tooltip, OverrideNativeName="delayToInitialWarning_13_ABB537A94256561E91C96CBDD3800223"))
	float bpv__delayToInitialWarning_13_ABB537A94256561E91C96CBDD3800223__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="intervalBetweenWarningAndLethal", Tooltip, OverrideNativeName="intervalBetweenWarningAndLethal_16_9FAA881E4346AA8B20B2F5AC2EC4B9C2"))
	float bpv__intervalBetweenWarningAndLethal_16_9FAA881E4346AA8B20B2F5AC2EC4B9C2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="warningSprite", Tooltip, OverrideNativeName="warningSprite_22_2987F1D74076859DAD7F3D8997106801"))
	UPaperSprite* bpv__warningSprite_22_2987F1D74076859DAD7F3D8997106801__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="lethalSprite", Tooltip, OverrideNativeName="lethalSprite_23_2C4BC8D5415600C32BA9FCAE8F926EA7"))
	UPaperSprite* bpv__lethalSprite_23_2C4BC8D5415600C32BA9FCAE8F926EA7__pf;
	static FTimingInformation__pf2117864009 GetDefaultValue();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FTimingInformation__pf2117864009& __Other) const
	{
		return FTimingInformation__pf2117864009::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FTimingInformation__pf2117864009& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FTimingInformation__pf2117864009::StaticStruct()); }
};
