#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "MovementInformation__pf2117864009.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/MovementInformation.MovementInformation", OverrideNativeName="MovementInformation"))
struct FMovementInformation__pf2117864009
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="movementType", Tooltip, OverrideNativeName="movementType_2_BFE0D7584C0CCEB17784CE9F9D766C81"))
	uint8 bpv__movementType_2_BFE0D7584C0CCEB17784CE9F9D766C81__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="magnitude", Tooltip, OverrideNativeName="magnitude_5_1A94BD8D432D21E0739B2C94D2AEFFF4"))
	int32 bpv__magnitude_5_1A94BD8D432D21E0739B2C94D2AEFFF4__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="duration", Tooltip, OverrideNativeName="duration_7_E646FB364B6D86D9E0DBC2B50AB72FEC"))
	int32 bpv__duration_7_E646FB364B6D86D9E0DBC2B50AB72FEC__pf;
	static FMovementInformation__pf2117864009 GetDefaultValue();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FMovementInformation__pf2117864009& __Other) const
	{
		return FMovementInformation__pf2117864009::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
	friend uint32 GetTypeHash(const FMovementInformation__pf2117864009& __Other) { return UUserDefinedStruct::GetUserDefinedStructTypeHash( &__Other, FMovementInformation__pf2117864009::StaticStruct()); }
};
