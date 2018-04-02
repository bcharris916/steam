#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "AnimationInformation__pf2117864009.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/AnimationInformation.AnimationInformation", OverrideNativeName="AnimationInformation"))
struct FAnimationInformation__pf2117864009
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Animation", Tooltip, OverrideNativeName="Animation_2_B1E8293B4D15F32368D8EA8DBCAC948F"))
	int32 bpv__Animation_2_B1E8293B4D15F32368D8EA8DBCAC948F__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="length", Tooltip, OverrideNativeName="length_4_563C277D4748AD6B69129A931A15592A"))
	int32 bpv__length_4_563C277D4748AD6B69129A931A15592A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="startTime", Tooltip, OverrideNativeName="startTime_6_81B8F6974B2D7664C14FE0932BB2C1A5"))
	int32 bpv__startTime_6_81B8F6974B2D7664C14FE0932BB2C1A5__pf;
	static FAnimationInformation__pf2117864009 GetDefaultValue();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FAnimationInformation__pf2117864009& __Other) const
	{
		return FAnimationInformation__pf2117864009::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FAnimationInformation__pf2117864009& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FAnimationInformation__pf2117864009::StaticStruct()); }
};
