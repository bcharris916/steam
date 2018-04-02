#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class AlobbyPlayerController_C__pf2687806415;
class UTexture2D;
class UTextBlock;
class UButton;
class UVerticalBox;
class UImage;
class UgameSettings_C__pf3941786787;
class UchatWIndow_C__pf1207061625;
class UcharacterSelect_C__pf3941786787;
class UDestroySessionCallbackProxy;
class AlobbyGM_C__pf2687806415;
class APlayerController;
#include "lobbyMenu__pf3941786787.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Lobby/lobbyMenu.lobbyMenu_C", OverrideNativeName="lobbyMenu_C"))
class UlobbyMenu_C__pf3941786787 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="characterSelect", Category="lobbyMenu", OverrideNativeName="characterSelect"))
	UcharacterSelect_C__pf3941786787* bpv__characterSelect__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="chatWIndow", Category="lobbyMenu", OverrideNativeName="chatWIndow"))
	UchatWIndow_C__pf1207061625* bpv__chatWIndow__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="chooseCharButton", Category="lobbyMenu", OverrideNativeName="chooseCharButton"))
	UButton* bpv__chooseCharButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="gameSettings", Category="lobbyMenu", OverrideNativeName="gameSettings"))
	UgameSettings_C__pf3941786787* bpv__gameSettings__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="leaveLobbyButton", Category="lobbyMenu", OverrideNativeName="leaveLobbyButton"))
	UButton* bpv__leaveLobbyButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="mapTexture", Category="lobbyMenu", OverrideNativeName="mapTexture"))
	UImage* bpv__mapTexture__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="playerWindow", Category="lobbyMenu", OverrideNativeName="playerWindow"))
	UVerticalBox* bpv__playerWindow__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="readyStartButton", Category="lobbyMenu", OverrideNativeName="readyStartButton"))
	UButton* bpv__readyStartButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="setGameSettingsButton", Category="lobbyMenu", OverrideNativeName="setGameSettingsButton"))
	UButton* bpv__setGameSettingsButton__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_0", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_3", OverrideNativeName="TextBlock_3"))
	UTextBlock* bpv__TextBlock_3__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_13", OverrideNativeName="TextBlock_13"))
	UTextBlock* bpv__TextBlock_13__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_35", OverrideNativeName="TextBlock_35"))
	UTextBlock* bpv__TextBlock_35__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Lobby Server Name", Category="lobbyInfo", ExposeOnSpawn="true", OverrideNativeName="lobbyServerName"))
	FText bpv__lobbyServerName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Map Name", Category="lobbyInfo", OverrideNativeName="mapName"))
	FText bpv__mapName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Map Time", Category="lobbyInfo", OverrideNativeName="mapTime"))
	FText bpv__mapTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Map Image", Category="lobbyInfo", OverrideNativeName="mapImage"))
	UTexture2D* bpv__mapImage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Players Display", Category="lobbyInfo", OverrideNativeName="playersDisplay"))
	FText bpv__playersDisplay__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lobby Controller REF", Category="Default", OverrideNativeName="lobbyControllerREF"))
	AlobbyPlayerController_C__pf2687806415* bpv__lobbyControllerREF__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Ready Button Text", Category="lobbyInfo", ExposeOnSpawn="true", OverrideNativeName="readyButtonText"))
	FText bpv__readyButtonText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ready Status", Category="Default", OverrideNativeName="readyStatus"))
	FText bpv__readyStatus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_incomingPlayerInfo"))
	FPlayerInfo__pf533497531 b0l__K2Node_CustomEvent_incomingPlayerInfo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DestroySession_ReturnValue"))
	UDestroySessionCallbackProxy* b0l__CallFunc_DestroySession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_GM"))
	AlobbyGM_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_GM__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerController* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller2"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller3"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UlobbyMenu_C__pf3941786787(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyMenu__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__chooseCharButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__chooseCharButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__setGameSettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__setGameSettingsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="updateStatus"))
	virtual void bpf__updateStatus__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__readyStartButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__readyStartButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__leaveLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__leaveLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="updatePlayerWindow"))
	virtual void bpf__updatePlayerWindow__pf(FPlayerInfo__pf533497531 bpp__incomingPlayerInfo__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="clearPlayerList"))
	virtual void bpf__clearPlayerList__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_C3EBCC454FAB8483C056089BF08BA5A4"))
	virtual void bpf__OnSuccess_C3EBCC454FAB8483C056089BF08BA5A4__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_C3EBCC454FAB8483C056089BF08BA5A4"))
	virtual void bpf__OnFailure_C3EBCC454FAB8483C056089BF08BA5A4__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="enableReadyStartButton"))
	virtual bool  bpf__enableReadyStartButton__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
