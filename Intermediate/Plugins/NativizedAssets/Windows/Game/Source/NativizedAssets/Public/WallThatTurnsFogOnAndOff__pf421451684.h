#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Wall__pf421451684.h"
#include "WallThatTurnsFogOnAndOff__pf421451684.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/ExampleMap/Blueprints/WallThatTurnsFogOnAndOff.WallThatTurnsFogOnAndOff_C", OverrideNativeName="WallThatTurnsFogOnAndOff_C"))
class AWallThatTurnsFogOnAndOff_C__pf421451684 : public AWall_C__pf421451684
{
public:
	GENERATED_BODY()
	AWallThatTurnsFogOnAndOff_C__pf421451684(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_WallThatTurnsFogOnAndOff_0"))
	void bpf__ExecuteUbergraph_WallThatTurnsFogOnAndOff__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
