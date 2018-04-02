#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "playerSaveGame__pf533497531.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/allLevels/playerSaveGame.playerSaveGame_C", OverrideNativeName="playerSaveGame_C"))
class UplayerSaveGame_C__pf533497531 : public USaveGame
{
public:
	GENERATED_BODY()
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="S Player INfo", Category="Default", OverrideNativeName="S_PlayerINfo"))
	FPlayerInfo__pf533497531 bpv__S_PlayerINfo__pf;
	UplayerSaveGame_C__pf533497531(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
public:
};
