#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "FOWComponent__pf1242490746.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/Blueprints/FOWComponent.FOWComponent_C", OverrideNativeName="FOWComponent_C"))
class UFOWComponent_C__pf1242490746 : public UActorComponent
{
public:
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Cast FOW", Category="FOW Casting", ExposeOnSpawn="true", tooltip="Should object block vision (cast fog of war).", OverrideNativeName="CastFOW"))
	bool bpv__CastFOW__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Edges", Category="FOW Casting", tooltip="Edges of the object. ", OverrideNativeName="Edges"))
	TArray<FVector> bpv__Edges__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Size X", Category="FOW Casting", ExposeOnSpawn="true", tooltip="Size of the object on X axis. Used to calculate edges.", OverrideNativeName="SizeX"))
	float bpv__SizeX__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Size Y", Category="FOW Casting", ExposeOnSpawn="true", tooltip="Size of the object on Y axis. Used to calculate edges.", OverrideNativeName="SizeY"))
	float bpv__SizeY__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Hide in FOW", Category="FOW Visibility", tooltip="Should object be hidden when in fog of war.", ExposeOnSpawn="true", OverrideNativeName="HideInFOW"))
	bool bpv__HideInFOW__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Radius", Category="FOW Visibility", tooltip="Radius of the object for the visibility tests.", ExposeOnSpawn="true", OverrideNativeName="Radius"))
	float bpv__Radius__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Remember Location", Category="FOW Visibility", tooltip="Should object be visible in fog after being discovered.", ExposeOnSpawn="true", OverrideNativeName="RememberLocation"))
	bool bpv__RememberLocation__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Tests", Category="FOW Visibility", ExposeOnSpawn="true", UIMin="0", UIMax="5", ClampMin="0", ClampMax="5", OverrideNativeName="Tests"))
	int32 bpv__Tests__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Size Z", Category="FOW Casting", ExposeOnSpawn="true", OverrideNativeName="SizeZ"))
	float bpv__SizeZ__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Draw Fog Of Shape", Category="FOW Casting", ExposeOnSpawn="true", tooltip="Should fog be drown under actor.", OverrideNativeName="DrawFogOfShape"))
	bool bpv__DrawFogOfShape__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Is Round", Category="FOW Casting", ExposeOnSpawn="true", OverrideNativeName="isRound"))
	bool bpv__isRound__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Size Radius", Category="FOW Casting", ExposeOnSpawn="true", OverrideNativeName="Size_Radius"))
	float bpv__Size_Radius__pf;
	UFOWComponent_C__pf1242490746(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_FOWComponent__pf_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Begin Play", ToolTip="Blueprint implementable event for when the component is beginning play, called before its Owner\'s BeginPlay on Actor BeginPlayor when the component is dynamically created if the Actor has already BegunPlay.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="DefineEdges"))
	virtual void bpf__DefineEdges__pf();
public:
};
