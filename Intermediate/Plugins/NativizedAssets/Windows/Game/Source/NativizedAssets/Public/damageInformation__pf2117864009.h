#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
#include "damageInformation__pf2117864009.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/Attacks/damageInformation.DamageInformation", OverrideNativeName="DamageInformation"))
struct FDamageInformation__pf2117864009
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="magnitude", Tooltip, OverrideNativeName="magnitude_8_D04F5D3743ED99DDB27FB1A09894C887"))
	TArray<int32> bpv__magnitude_8_D04F5D3743ED99DDB27FB1A09894C887__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="type", Tooltip, OverrideNativeName="type_9_3BD4F3564F914DD16BF8C3A81EEDBE15"))
	TArray<uint8> bpv__type_9_3BD4F3564F914DD16BF8C3A81EEDBE15__pf;
	static FDamageInformation__pf2117864009 GetDefaultValue();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FDamageInformation__pf2117864009& __Other) const
	{
		return FDamageInformation__pf2117864009::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
