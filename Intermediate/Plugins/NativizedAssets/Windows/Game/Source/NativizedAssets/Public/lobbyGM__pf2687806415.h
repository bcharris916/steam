#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/Engine/Classes/GameFramework/GameMode.h"
class ACharacter;
class UClass;
class UTexture2D;
class APlayerStart;
class APlayerController;
class USceneComponent;
class AlobbyPlayerController_C__pf2687806415;
class UgameInfoInstance_C__pf533497531;
class AController;
#include "lobbyGM__pf2687806415.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Blueprints/lobby/lobbyGM.lobbyGM_C", OverrideNativeName="lobbyGM_C"))
class AlobbyGM_C__pf2687806415 : public AGameMode
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="DefaultSceneRoot"))
	USceneComponent* bpv__DefaultSceneRoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can We Start?", Category="Default", OverrideNativeName="canWeStart?"))
	bool bpv__canWeStartx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="All Player Controllers", Category="Default", OverrideNativeName="allPlayerControllers"))
	TArray<APlayerController*> bpv__allPlayerControllers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Spawn Points", Category="Default", OverrideNativeName="spawnPoints"))
	TArray<APlayerStart*> bpv__spawnPoints__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Server Name", Category="Default", OverrideNativeName="serverName"))
	FText bpv__serverName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Players", Category="Default", OverrideNativeName="maxPlayers"))
	int32 bpv__maxPlayers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Gm Map Time", Category="Default", OverrideNativeName="gmMapTime"))
	FText bpv__gmMapTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Gm Map Name", Category="Default", OverrideNativeName="gmMapName"))
	FText bpv__gmMapName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Gm Map Image", Category="Default", OverrideNativeName="gmMapImage"))
	UTexture2D* bpv__gmMapImage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Players", Category="Default", OverrideNativeName="currentPlayers"))
	int32 bpv__currentPlayers__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Connected Players", Category="Default", ExposeOnSpawn="true", OverrideNativeName="connectedPlayers"))
	TArray<FPlayerInfo__pf533497531> bpv__connectedPlayers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Available Characters", Category="Default", OverrideNativeName="availableCharacters"))
	TArray<bool> bpv__availableCharacters__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Gm Map ID", Category="Default", OverrideNativeName="gmMapID"))
	int32 bpv__gmMapID__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Characters", Category="Default", OverrideNativeName="characters"))
	TArray<UClass*> bpv__characters__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable2"))
	int32 b0l__Temp_int_Loop_Counter_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable3"))
	int32 b0l__Temp_int_Loop_Counter_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable2"))
	int32 b0l__Temp_int_Array_Index_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable3"))
	int32 b0l__Temp_int_Array_Index_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable4"))
	int32 b0l__Temp_int_Loop_Counter_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable4"))
	int32 b0l__Temp_int_Array_Index_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerController2"))
	APlayerController* b0l__K2Node_CustomEvent_playerController2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_characterClass"))
	UClass* b0l__K2Node_CustomEvent_characterClass__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_changedStatus"))
	bool b0l__K2Node_CustomEvent_changedStatus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_NewPlayer"))
	APlayerController* b0l__K2Node_Event_NewPlayer__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<APlayerStart*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Info_Instance"))
	UgameInfoInstance_C__pf533497531* b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable2"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerController"))
	APlayerController* b0l__K2Node_CustomEvent_playerController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable5"))
	int32 b0l__Temp_int_Loop_Counter_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	APlayerStart* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	APlayerController* b0l__CallFunc_Array_Get_Item2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller2"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item3"))
	FPlayerInfo__pf533497531 b0l__CallFunc_Array_Get_Item3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_mapImage"))
	UTexture2D* b0l__K2Node_CustomEvent_mapImage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_mapName"))
	FText b0l__K2Node_CustomEvent_mapName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_mapTime"))
	FText b0l__K2Node_CustomEvent_mapTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_mapID"))
	int32 b0l__K2Node_CustomEvent_mapID__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item4"))
	APlayerController* b0l__CallFunc_Array_Get_Item4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller3"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable5"))
	int32 b0l__Temp_int_Array_Index_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item5"))
	APlayerController* b0l__CallFunc_Array_Get_Item5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller4"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_playerID"))
	int32 b0l__K2Node_CustomEvent_playerID__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_ExitingController"))
	AController* b0l__K2Node_Event_ExitingController__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item6"))
	APlayerController* b0l__CallFunc_Array_Get_Item6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller5"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item7"))
	APlayerController* b0l__CallFunc_Array_Get_Item7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item8"))
	APlayerController* b0l__CallFunc_Array_Get_Item8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller6"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b0l__K2Node_DynamicCast_bSuccess7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller7"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess8"))
	bool b0l__K2Node_DynamicCast_bSuccess8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item9"))
	APlayerStart* b0l__CallFunc_Array_Get_Item9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Variable"))
	bool b0l__Temp_bool_Variable__pf;
	AlobbyGM_C__pf2687806415(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_lobbyGM__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_lobbyGM__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(Category="Game", DisplayName="OnLogout", ToolTip="Implementable event when a Controller with a PlayerState leaves the game.", CppFromBpEvent, OverrideNativeName="K2_OnLogout"))
	void bpf__K2_OnLogout__pf(AController* bpp__ExitingController__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="youHaveBeenKicked"))
	virtual void bpf__youHaveBeenKicked__pf(int32 bpp__playerID__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="serverUpdateGameSettings"))
	virtual void bpf__serverUpdateGameSettings__pf(UTexture2D* bpp__mapImage__pf, const FText& bpp__mapName__pf__const, const FText& bpp__mapTime__pf__const, int32 bpp__mapID__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="cannotStartGame"))
	virtual void bpf__cannotStartGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="addToKickList"))
	virtual void bpf__addToKickList__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="respawnPlayer"))
	virtual void bpf__respawnPlayer__pf(APlayerController* bpp__playerController__pf);
	UFUNCTION(meta=(Category="Game", DisplayName="OnPostLogin", ToolTip="Notification that a player has successfully logged in, and has been given a player controller", CppFromBpEvent, OverrideNativeName="K2_PostLogin"))
	void bpf__K2_PostLogin__pf(APlayerController* bpp__NewPlayer__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="launchGame"))
	virtual void bpf__launchGame__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="everyoneUpdate"))
	virtual void bpf__everyoneUpdate__pf();
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="SwapCharacter"))
	virtual void bpf__SwapCharacter__pf(APlayerController* bpp__playerController__pf, UClass* bpp__characterClass__pf, bool bpp__changedStatus__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
