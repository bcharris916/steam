#pragma once
#include "GeneratedCodeHelpers.h"
#include "Blueprint/BlueprintSupport.h"
class ACharacter;
class UClass;
class UTexture2D;
#include "PlayerInfo__pf533497531.generated.h"

USTRUCT(BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/allLevels/PlayerInfo.PlayerInfo", OverrideNativeName="PlayerInfo"))
struct FPlayerInfo__pf533497531
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="myPlayerName", Tooltip, OverrideNativeName="myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A"))
	FText bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="myPlayerImage", Tooltip, OverrideNativeName="myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15"))
	UTexture2D* bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf;
	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, meta=(DisplayName="myPlayerCharacter", Tooltip, OverrideNativeName="myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2"))
	UClass* bpv__myPlayerCharacter_8_09E183C542505D365AD557BA76D256B2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="myPlayerCharImage", Tooltip, OverrideNativeName="myPlayerCharImage_11_46601ED342E51FBB0EEC429F8DA0F92A"))
	UTexture2D* bpv__myPlayerCharImage_11_46601ED342E51FBB0EEC429F8DA0F92A__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="myPlayerStatus", Tooltip, OverrideNativeName="myPlayerStatus_14_F1604291452782409E92779450FED1BE"))
	FText bpv__myPlayerStatus_14_F1604291452782409E92779450FED1BE__pf;
	static FPlayerInfo__pf533497531 GetDefaultValue();
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	bool operator== (const FPlayerInfo__pf533497531& __Other) const
	{
		return FPlayerInfo__pf533497531::StaticStruct()->CompareScriptStruct(this, &__Other, 0);
	};
};
