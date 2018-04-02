#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class A0_base_C__pf1490413170;
class AgameplayPC_C__pf1836565435;
class APlayerController;
class AgameplayGM_C__pf1836565435;
class UPaperFlipbookComponent;
class UgameplayChat_C__pf1207061625;
class AaoeSpell_C__pf2191428166;
class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
#include "gameplayPC__pf1836565435.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/gameplay/gameplayPC.gameplayPC_C", OverrideNativeName="gameplayPC_C"))
class AgameplayPC_C__pf1836565435 : public APlayerController
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="burstFlipbook"))
	UPaperFlipbookComponent* bpv__burstFlipbook__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="aoeFlipbook"))
	UPaperFlipbookComponent* bpv__aoeFlipbook__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Click DIstance", Category="Default", OverrideNativeName="MinClickDIstance"))
	float bpv__MinClickDIstance__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Gameplay Chat WB", Category="Default", OverrideNativeName="gameplayChatWB"))
	UgameplayChat_C__pf1207061625* bpv__gameplayChatWB__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Settings", Category="Default", ExposeOnSpawn="true", OverrideNativeName="playerSettings"))
	FPlayerInfo__pf533497531 bpv__playerSettings__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Senders Text", Category="Default", OverrideNativeName="sendersText"))
	FText bpv__sendersText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Sender Name", Category="Default", OverrideNativeName="senderName"))
	FText bpv__senderName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Requesting Client", Category="Default", OverrideNativeName="requestingClient"))
	AgameplayPC_C__pf1836565435* bpv__requestingClient__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hit", Category="Default", OverrideNativeName="hit"))
	FHitResult bpv__hit__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hit 2", Category="Default", OverrideNativeName="hit2"))
	FHitResult bpv__hit2__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Hit 3", Category="Default", OverrideNativeName="hit3"))
	FHitResult bpv__hit3__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Casting Player", Category="Default", OverrideNativeName="castingPlayer"))
	A0_base_C__pf1490413170* bpv__castingPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Cast Time", Category="Default", OverrideNativeName="castTime"))
	float bpv__castTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Time Of Cast", Category="Default", OverrideNativeName="timeOfCast"))
	float bpv__timeOfCast__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Spell Ready to Spawn", Category="Default", OverrideNativeName="spellReadyToSpawn"))
	bool bpv__spellReadyToSpawn__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Spell Cast", Category="Default", OverrideNativeName="currentSpellCast"))
	AaoeSpell_C__pf2191428166* bpv__currentSpellCast__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key2"))
	FKey b0l__K2Node_InputKeyEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_textToSend"))
	FText b0l__K2Node_CustomEvent_textToSend__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGameplay_GM"))
	AgameplayGM_C__pf1836565435* b0l__K2Node_DynamicCast_AsGameplay_GM__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_senderName"))
	FText b0l__K2Node_CustomEvent_senderName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_senderText"))
	FText b0l__K2Node_CustomEvent_senderText__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGameplay_GM2"))
	AgameplayGM_C__pf1836565435* b0l__K2Node_DynamicCast_AsGameplay_GM2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerSettingsInfo"))
	FPlayerInfo__pf533497531 b0l__K2Node_CustomEvent_playerSettingsInfo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerController* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGameplay_PC"))
	AgameplayPC_C__pf1836565435* b0l__K2Node_DynamicCast_AsGameplay_PC__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_As0_Base"))
	A0_base_C__pf1490413170* b0l__K2Node_DynamicCast_As0_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetHitResultUnderCursorByChannel_HitResult"))
	FHitResult b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Distance"))
	float b0l__CallFunc_BreakHitResult_Distance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_As0_Base2"))
	A0_base_C__pf1490413170* b0l__K2Node_DynamicCast_As0_Base2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_As0_Base3"))
	A0_base_C__pf1490413170* b0l__K2Node_DynamicCast_As0_Base3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	AgameplayPC_C__pf1836565435(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_gameplayPC__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameplayPC__pf_13(int32 bpp__EntryPoint__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="spawnSpellSprite"))
	virtual void bpf__spawnSpellSprite__pf();
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="sendToServer"))
	virtual void bpf__sendToServer__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="passCharInfoToServer"))
	virtual void bpf__passCharInfoToServer__pf(FPlayerInfo__pf533497531 bpp__playerSettingsInfo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="castAbilityW"))
	virtual void bpf__castAbilityW__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="requestAbilityW"))
	virtual void bpf__requestAbilityW__pf();
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="castAbilityQ"))
	virtual void bpf__castAbilityQ__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="requestAbilityQ"))
	virtual void bpf__requestAbilityQ__pf();
	UFUNCTION(Server, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="updateChat"))
	virtual void bpf__updateChat__pf(const FText& bpp__senderName__pf__const, const FText& bpp__senderText__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="getchatmessage"))
	virtual void bpf__getchatmessage__pf(const FText& bpp__textToSend__pf__const);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="setupChatWIndow"))
	virtual void bpf__setupChatWIndow__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Q_K2Node_InputKeyEvent_2"))
	virtual void bpf__InpActEvt_Q_K2Node_InputKeyEvent_2__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_3__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToHitLocation"))
	virtual void bpf__MoveToHitLocation__pf(FHitResult bpp__HIt__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="loadGame"))
	virtual void bpf__loadGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="NewFunction_0"))
	virtual void bpf__NewFunction_0__pf();
public:
};
