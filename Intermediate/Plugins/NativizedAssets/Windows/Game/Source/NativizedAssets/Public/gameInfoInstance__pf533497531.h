#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
class UloadingScreen_C__pf1207061625;
class UoptionsMenu_C__pf1343218889;
class UhostMenu_C__pf1343218889;
class UmainMenu_C__pf1343218889;
class UCreateSessionCallbackProxy;
class UJoinSessionCallbackProxy;
class APlayerController;
class UDestroySessionCallbackProxy;
#include "gameInfoInstance__pf533497531.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/allLevels/gameInfoInstance.gameInfoInstance_C", OverrideNativeName="gameInfoInstance_C"))
class UgameInfoInstance_C__pf533497531 : public UGameInstance
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Menu WB", Category="Default", OverrideNativeName="mainMenuWB"))
	UmainMenu_C__pf1343218889* bpv__mainMenuWB__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Host Menu WB", Category="Default", OverrideNativeName="hostMenuWB"))
	UhostMenu_C__pf1343218889* bpv__hostMenuWB__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Options Menu WB", Category="Default", OverrideNativeName="optionsMenuWB"))
	UoptionsMenu_C__pf1343218889* bpv__optionsMenuWB__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Max Players", Category="serverSettings", OverrideNativeName="maxPlayers"))
	int32 bpv__maxPlayers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Server Name", Category="Default", OverrideNativeName="serverName"))
	FText bpv__serverName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Loading Screen WB", Category="Default", OverrideNativeName="loadingScreenWB"))
	UloadingScreen_C__pf1207061625* bpv__loadingScreenWB__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Settings Save", Category="Default", OverrideNativeName="playerSettingsSave"))
	FString bpv__playerSettingsSave__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Created Save File?", Category="Default", OverrideNativeName="createdSaveFile?"))
	bool bpv__createdSaveFilex__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate3"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate4"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_numberPlayers"))
	int32 b0l__K2Node_CustomEvent_numberPlayers__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_enableLAN_"))
	bool b0l__K2Node_CustomEvent_enableLAN___pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_serverName"))
	FText b0l__K2Node_CustomEvent_serverName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate5"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateSession_ReturnValue"))
	UCreateSessionCallbackProxy* b0l__CallFunc_CreateSession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_sessionToJoin"))
	FBlueprintSessionResult b0l__K2Node_CustomEvent_sessionToJoin__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue4"))
	bool b0l__CallFunc_IsValid_ReturnValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_JoinSession_ReturnValue"))
	UJoinSessionCallbackProxy* b0l__CallFunc_JoinSession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue5"))
	bool b0l__CallFunc_IsValid_ReturnValue5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_FailureType2"))
	TEnumAsByte<ENetworkFailure::Type> b0l__K2Node_Event_FailureType2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_bIsServer"))
	bool b0l__K2Node_Event_bIsServer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_FailureType"))
	TEnumAsByte<ETravelFailure::Type> b0l__K2Node_Event_FailureType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate6"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerController"))
	APlayerController* b0l__K2Node_CustomEvent_playerController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DestroySession_ReturnValue"))
	UDestroySessionCallbackProxy* b0l__CallFunc_DestroySession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue7"))
	bool b0l__CallFunc_IsValid_ReturnValue7__pf;
	UgameInfoInstance_C__pf533497531(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameInfoInstance__pf_16(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="saveGameCheck"))
	virtual void bpf__saveGameCheck__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="destroySessionCaller"))
	virtual void bpf__destroySessionCaller__pf(APlayerController* bpp__playerController__pf);
	UFUNCTION(meta=(DisplayName="TravelError", ToolTip="Opportunity for blueprints to handle travel errors.", CppFromBpEvent, OverrideNativeName="HandleTravelError"))
	void bpf__HandleTravelError__pf(ETravelFailure::Type bpp__FailureType__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowMainMenu"))
	virtual void bpf__ShowMainMenu__pf();
	UFUNCTION(meta=(DisplayName="NetworkError", ToolTip="Opportunity for blueprints to handle network errors.", CppFromBpEvent, OverrideNativeName="HandleNetworkError"))
	void bpf__HandleNetworkError__pf(ENetworkFailure::Type bpp__FailureType__pf, bool bpp__bIsServer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="joinServer"))
	virtual void bpf__joinServer__pf(FBlueprintSessionResult bpp__sessionToJoin__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="showLoadingScreen"))
	virtual void bpf__showLoadingScreen__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="launchLobby"))
	virtual void bpf__launchLobby__pf(int32 bpp__numberPlayers__pf, bool bpp__enableLANx__pfzy, const FText& bpp__serverName__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="showOptionsMenu"))
	virtual void bpf__showOptionsMenu__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="showServerMenu"))
	virtual void bpf__showServerMenu__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShowHostMenu"))
	virtual void bpf__ShowHostMenu__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_D98D5DF945E741F55AB9ADBFAD37ABF0"))
	virtual void bpf__OnSuccess_D98D5DF945E741F55AB9ADBFAD37ABF0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_D98D5DF945E741F55AB9ADBFAD37ABF0"))
	virtual void bpf__OnFailure_D98D5DF945E741F55AB9ADBFAD37ABF0__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_5CDCCF3B4CDACBE7E37E129A38F379F3"))
	virtual void bpf__OnSuccess_5CDCCF3B4CDACBE7E37E129A38F379F3__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_5CDCCF3B4CDACBE7E37E129A38F379F3"))
	virtual void bpf__OnFailure_5CDCCF3B4CDACBE7E37E129A38F379F3__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_15496AFC4A06C70CDE0628BE1A91E1E9"))
	virtual void bpf__OnSuccess_15496AFC4A06C70CDE0628BE1A91E1E9__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_15496AFC4A06C70CDE0628BE1A91E1E9"))
	virtual void bpf__OnFailure_15496AFC4A06C70CDE0628BE1A91E1E9__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="netErrorToString"))
	virtual void bpf__netErrorToString__pf(ENetworkFailure::Type bpp__failureType__pf, /*out*/ FString& bpp__outString__pf);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="travelErrorToScreen"))
	virtual void bpf__travelErrorToScreen__pf(ETravelFailure::Type bpp__failureType__pf, /*out*/ FString& bpp__outText__pf);
public:
};
