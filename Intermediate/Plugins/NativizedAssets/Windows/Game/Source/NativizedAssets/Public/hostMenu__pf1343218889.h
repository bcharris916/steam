#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UgameInfoInstance_C__pf533497531;
class UEditableTextBox;
class UButton;
class UTextBlock;
#include "hostMenu__pf1343218889.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/MainMenu/hostMenu.hostMenu_C", OverrideNativeName="hostMenu_C"))
class UhostMenu_C__pf1343218889 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Accept", Category="hostMenu", OverrideNativeName="Accept"))
	UButton* bpv__Accept__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="backButton", Category="hostMenu", OverrideNativeName="backButton"))
	UButton* bpv__backButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="decreasePlayers", Category="hostMenu", OverrideNativeName="decreasePlayers"))
	UButton* bpv__decreasePlayers__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="IncreasePlayers", Category="hostMenu", OverrideNativeName="IncreasePlayers"))
	UButton* bpv__IncreasePlayers__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_61", OverrideNativeName="TextBlock_61"))
	UTextBlock* bpv__TextBlock_61__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_65", OverrideNativeName="TextBlock_65"))
	UTextBlock* bpv__TextBlock_65__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_88", OverrideNativeName="TextBlock_88"))
	UTextBlock* bpv__TextBlock_88__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleLeft", Category="hostMenu", OverrideNativeName="toggleLeft"))
	UButton* bpv__toggleLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleRight", Category="hostMenu", OverrideNativeName="toggleRight"))
	UButton* bpv__toggleRight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="UserServerName", Category="hostMenu", OverrideNativeName="UserServerName"))
	UEditableTextBox* bpv__UserServerName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Instance Ref", Category="Default", OverrideNativeName="gameInstanceRef"))
	UgameInfoInstance_C__pf533497531* bpv__gameInstanceRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Server Name Text", Category="Default", OverrideNativeName="serverNameText"))
	FText bpv__serverNameText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Accept Enabled?", Category="Default", OverrideNativeName="acceptEnabled?"))
	bool bpv__acceptEnabledx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Num Players", Category="Default", OverrideNativeName="numPlayers"))
	int32 bpv__numPlayers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enable LAN?", Category="Default", OverrideNativeName="enableLAN?"))
	bool bpv__enableLANx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Max Players", Category="Default", OverrideNativeName="maxPlayers"))
	int32 bpv__maxPlayers__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Play Mode Text", Category="Default", OverrideNativeName="playModeText"))
	FText bpv__playModeText__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Text"))
	FText b0l__K2Node_ComponentBoundEvent_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Info_Instance"))
	UgameInfoInstance_C__pf533497531* b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UhostMenu_C__pf1343218889(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_hostMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_hostMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_hostMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_hostMenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_hostMenu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_hostMenu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_hostMenu__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_hostMenu__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleRight_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleLeft_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__IncreasePlayers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__IncreasePlayers_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__decreasePlayers_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__decreasePlayers_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Accept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__backButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UserServerName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__UserServerName_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature__pf(/*out*/ FText const& bpp__Text__pf__const);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="convertNumPlayers"))
	virtual FText  bpf__convertNumPlayers__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
