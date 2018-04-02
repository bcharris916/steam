#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "VisibilityMode__pf421451684.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
class UFOWComponent_C__pf1242490746;
#include "BotThatRunsAround__pf421451684.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/ExampleMap/Blueprints/BotThatRunsAround.BotThatRunsAround_C", OverrideNativeName="BotThatRunsAround_C"))
class ABotThatRunsAround_C__pf421451684 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="FOWComponent"))
	UFOWComponent_C__pf1242490746* bpv__FOWComponent__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Type", Category="Default", ExposeOnSpawn="true", OverrideNativeName="Type"))
	E__VisibilityMode__pf bpv__Type__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Local Locations", Category="Default", MakeEditWidget="true", ExposeOnSpawn="true", OverrideNativeName="LocalLocations"))
	TArray<FVector> bpv__LocalLocations__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Global Locations", Category="Default", OverrideNativeName="GlobalLocations"))
	TArray<FVector> bpv__GlobalLocations__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FVector b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	FVector b0l__CallFunc_Array_Get_Item2__pf;
	ABotThatRunsAround_C__pf421451684(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_BotThatRunsAround_0"))
	void bpf__ExecuteUbergraph_BotThatRunsAround__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
