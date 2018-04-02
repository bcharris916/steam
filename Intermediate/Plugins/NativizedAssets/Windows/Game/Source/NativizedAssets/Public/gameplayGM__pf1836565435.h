#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
class APlayerStart;
class APlayerController;
class USceneComponent;
class ACharacter;
class UClass;
class AController;
class AgameplayPC_C__pf1836565435;
class UgameInfoInstance_C__pf533497531;
#include "gameplayGM__pf1836565435.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/gameplayGM.gameplayGM_C", OverrideNativeName="gameplayGM_C"))
class AgameplayGM_C__pf1836565435 : public AGameMode
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="All Player Controllers", Category="Default", OverrideNativeName="allPlayerControllers"))
	TArray<APlayerController*> bpv__allPlayerControllers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Spawn Points", Category="Default", OverrideNativeName="spawnPoints"))
	TArray<APlayerStart*> bpv__spawnPoints__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_OldPC"))
	APlayerController* b0l__K2Node_Event_OldPC__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewPC"))
	APlayerController* b0l__K2Node_Event_NewPC__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerController"))
	APlayerController* b0l__K2Node_CustomEvent_playerController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerCharacter"))
	UClass* b0l__K2Node_CustomEvent_playerCharacter__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayerStart*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerStart* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ExitingController"))
	AController* b0l__K2Node_Event_ExitingController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGameplay_PC"))
	AgameplayPC_C__pf1836565435* b0l__K2Node_DynamicCast_AsGameplay_PC__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Info_Instance"))
	UgameInfoInstance_C__pf533497531* b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	AgameplayGM_C__pf1836565435(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_gameplayGM__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayGM__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayGM__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayGM__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayGM__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayGM__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(meta=(Category="Game", DisplayName="OnLogout", ToolTip="Implementable event when a Controller with a PlayerState leaves the game.", CppFromBpEvent, OverrideNativeName="K2_OnLogout"))
	void bpf__K2_OnLogout__pf(AController* bpp__ExitingController__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="respawnPlayer"))
	virtual void bpf__respawnPlayer__pf(APlayerController* bpp__playerController__pf, UClass* bpp__playerCharacter__pf);
	UFUNCTION(meta=(Category="Game", DisplayName="OnSwapPlayerControllers", ToolTip="Called when a PlayerController is swapped to a new one during seamless travel", CppFromBpEvent, OverrideNativeName="K2_OnSwapPlayerControllers"))
	void bpf__K2_OnSwapPlayerControllers__pf(APlayerController* bpp__OldPC__pf, APlayerController* bpp__NewPC__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
