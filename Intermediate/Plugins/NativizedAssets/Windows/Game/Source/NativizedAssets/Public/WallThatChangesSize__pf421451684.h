#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Wall__pf421451684.h"
class UTimelineComponent;
#include "WallThatChangesSize__pf421451684.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/ExampleMap/Blueprints/WallThatChangesSize.WallThatChangesSize_C", OverrideNativeName="WallThatChangesSize_C"))
class AWallThatChangesSize_C__pf421451684 : public AWall_C__pf421451684
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="Transformation_Scale_3314D69C49EA8E42767BA3AB3639159C"))
	FVector bpv__Transformation_Scale_3314D69C49EA8E42767BA3AB3639159C__pf;
	UPROPERTY(meta=(OverrideNativeName="Transformation__Direction_3314D69C49EA8E42767BA3AB3639159C"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Transformation__Direction_3314D69C49EA8E42767BA3AB3639159C__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="WallThatChangesSize", OverrideNativeName="Transformation"))
	UTimelineComponent* bpv__Transformation__pf;
	AWallThatChangesSize_C__pf421451684(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_WallThatChangesSize__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_WallThatChangesSize__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_WallThatChangesSize_2"))
	void bpf__ExecuteUbergraph_WallThatChangesSize__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="Transformation__UpdateFunc"))
	virtual void bpf__Transformation__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Transformation__FinishedFunc"))
	virtual void bpf__Transformation__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
