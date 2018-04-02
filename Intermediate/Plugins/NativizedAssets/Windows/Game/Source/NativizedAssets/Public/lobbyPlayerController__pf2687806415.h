#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
class UTexture2D;
class UplayerSaveGame_C__pf533497531;
class UlobbyMenu_C__pf3941786787;
class A0_base_C__pf1490413170;
class AlobbyGM_C__pf2687806415;
class UDestroySessionCallbackProxy;
class UButton;
class ACharacter;
class UClass;
class APlayerController;
class AlobbyPlayerController_C__pf2687806415;
class UPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
class APlayerStart;
#include "lobbyPlayerController__pf2687806415.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/lobby/lobbyPlayerController.lobbyPlayerController_C", OverrideNativeName="lobbyPlayerController_C"))
class AlobbyPlayerController_C__pf2687806415 : public APlayerController
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="EmptyOnlineDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE(F__EmptyOnlineDelegate__DelegateSignature__SC_0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Settings", Category="Default", ExposeOnSpawn="true", OverrideNativeName="playerSettings"))
	FPlayerInfo__pf533497531 bpv__playerSettings__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Lobby Menu WB", Category="Default", OverrideNativeName="lobbyMenuWB"))
	UlobbyMenu_C__pf3941786787* bpv__lobbyMenuWB__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="All Connected Players", Category="Default", OverrideNativeName="allConnectedPlayers"))
	TArray<FPlayerInfo__pf533497531> bpv__allConnectedPlayers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Settings Save", Category="Default", OverrideNativeName="playerSettingsSave"))
	FString bpv__playerSettingsSave__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Save Game REF", Category="Default", OverrideNativeName="playerSaveGameREF"))
	UplayerSaveGame_C__pf533497531* bpv__playerSaveGameREF__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Selected Character", Category="Default", OverrideNativeName="selectedCharacter"))
	int32 bpv__selectedCharacter__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Available Characters", Category="Default", OverrideNativeName="availableCharacters"))
	TArray<bool> bpv__availableCharacters__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Previous Selected Char", Category="Default", OverrideNativeName="previousSelectedChar"))
	int32 bpv__previousSelectedChar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Char Image", Category="Default", OverrideNativeName="charImage"))
	UTexture2D* bpv__charImage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Sender Text", Category="Default", OverrideNativeName="senderText"))
	FText bpv__senderText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Sender Name", Category="Default", OverrideNativeName="senderName"))
	FText bpv__senderName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Min Click DIstance", Category="Default", OverrideNativeName="minClickDIstance"))
	float bpv__minClickDIstance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_As0_Base"))
	A0_base_C__pf1490413170* b0l__K2Node_DynamicCast_As0_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerInfo"))
	FPlayerInfo__pf533497531 b0l__K2Node_CustomEvent_playerInfo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_changedStatus"))
	bool b0l__K2Node_CustomEvent_changedStatus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_serverName"))
	FText b0l__K2Node_CustomEvent_serverName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_GM"))
	AlobbyGM_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_GM__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_connectedPlayersInfo"))
	TArray<FPlayerInfo__pf533497531> b0l__K2Node_CustomEvent_connectedPlayersInfo__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_mapImage"))
	UTexture2D* b0l__K2Node_CustomEvent_mapImage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_nameMap"))
	FText b0l__K2Node_CustomEvent_nameMap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_mapTime"))
	FText b0l__K2Node_CustomEvent_mapTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_currentPlayers"))
	int32 b0l__K2Node_CustomEvent_currentPlayers__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_maxPlayers"))
	int32 b0l__K2Node_CustomEvent_maxPlayers__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData2"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<FFormatArgumentData> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_EndPlayReason"))
	TEnumAsByte<EEndPlayReason::Type> b0l__K2Node_Event_EndPlayReason__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_DestroySession_ReturnValue"))
	UDestroySessionCallbackProxy* b0l__CallFunc_DestroySession_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue3"))
	bool b0l__CallFunc_IsValid_ReturnValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_availableCharacters"))
	TArray<bool> b0l__K2Node_CustomEvent_availableCharacters__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	bool b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	UButton* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_charID"))
	int32 b0l__K2Node_CustomEvent_charID__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_charImage2"))
	UTexture2D* b0l__K2Node_CustomEvent_charImage2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__EmptyOnlineDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable3"))
	int32 b0l__Temp_int_Loop_Counter_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_character"))
	UClass* b0l__K2Node_CustomEvent_character__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_charImage"))
	UTexture2D* b0l__K2Node_CustomEvent_charImage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_textToSend"))
	FText b0l__K2Node_CustomEvent_textToSend__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_GM2"))
	AlobbyGM_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_GM2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_sender"))
	FText b0l__K2Node_CustomEvent_sender__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_text"))
	FText b0l__K2Node_CustomEvent_text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	APlayerController* b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_target"))
	A0_base_C__pf1490413170* b0l__K2Node_CustomEvent_target__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable3"))
	int32 b0l__Temp_int_Array_Index_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	FPlayerInfo__pf533497531 b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetHitResultUnderCursorByChannel_HitResult"))
	FHitResult b0l__CallFunc_GetHitResultUnderCursorByChannel_HitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_As0_Base2"))
	A0_base_C__pf1490413170* b0l__K2Node_DynamicCast_As0_Base2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_GM3"))
	AlobbyGM_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_GM3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	APlayerStart* b0l__CallFunc_Array_Get_Item5__pf;
	AlobbyPlayerController_C__pf2687806415(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyPlayerController__pf_18(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="movePawn"))
	virtual void bpf__movePawn__pf(A0_base_C__pf1490413170* bpp__target__pf);
	UFUNCTION(NetMulticast, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="rightClickEvent"))
	virtual void bpf__rightClickEvent__pf();
	UFUNCTION(Client, BlueprintCallable, Unreliable, meta=(Category, OverrideNativeName="updateChat"))
	virtual void bpf__updateChat__pf(const FText& bpp__sender__pf__const, const FText& bpp__text__pf__const);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="getChatMessage"))
	virtual void bpf__getChatMessage__pf(const FText& bpp__textToSend__pf__const);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="assignPlayer"))
	virtual void bpf__assignPlayer__pf(UClass* bpp__character__pf, UTexture2D* bpp__charImage__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="assignSelecteddCharacter"))
	virtual void bpf__assignSelecteddCharacter__pf(int32 bpp__charID__pf, UTexture2D* bpp__charImage__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="updateAvalableCharacters"))
	virtual void bpf__updateAvalableCharacters__pf(/*out*/ TArray<bool> const& bpp__availableCharacters__pf__const);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="kicked"))
	virtual void bpf__kicked__pf();
	UFUNCTION(meta=(DisplayName="End Play", Keywords="delete", ToolTip="Event to notify blueprints this actor is about to be deleted.", CppFromBpEvent, OverrideNativeName="ReceiveEndPlay"))
	void bpf__ReceiveEndPlay__pf(EEndPlayReason::Type bpp__EndPlayReason__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="updateNumPlayers"))
	virtual void bpf__updateNumPlayers__pf(int32 bpp__currentPlayers__pf, int32 bpp__maxPlayers__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="showLoadingScreen"))
	virtual void bpf__showLoadingScreen__pf();
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="updateLobbySettings"))
	virtual void bpf__updateLobbySettings__pf(UTexture2D* bpp__mapImage__pf, const FText& bpp__nameMap__pf__const, const FText& bpp__mapTime__pf__const);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="add PlayerInfo"))
	virtual void bpf__addxPlayerInfo__pfT(/*out*/ TArray<FPlayerInfo__pf533497531> const& bpp__connectedPlayersInfo__pf__const);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="setupLobbyMenu"))
	virtual void bpf__setupLobbyMenu__pf(const FText& bpp__serverName__pf__const);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="callUpdate"))
	virtual void bpf__callUpdate__pf(FPlayerInfo__pf533497531 bpp__playerInfo__pf, bool bpp__changedStatus__pf);
	UFUNCTION(Client, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="initalSetup"))
	virtual void bpf__initalSetup__pf();
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1"))
	virtual void bpf__InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1__pf(FKey bpp__Key__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_8D0FFF694034D0D1CBB5A69700D20292"))
	virtual void bpf__OnSuccess_8D0FFF694034D0D1CBB5A69700D20292__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_8D0FFF694034D0D1CBB5A69700D20292"))
	virtual void bpf__OnFailure_8D0FFF694034D0D1CBB5A69700D20292__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="saveGameCheck"))
	virtual void bpf__saveGameCheck__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="loadGame"))
	virtual void bpf__loadGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="saveGame"))
	virtual void bpf__saveGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="charCheck"))
	virtual void bpf__charCheck__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="MoveToHitLocation"))
	virtual void bpf__MoveToHitLocation__pf(FHitResult bpp__Hit__pf);
public:
};
