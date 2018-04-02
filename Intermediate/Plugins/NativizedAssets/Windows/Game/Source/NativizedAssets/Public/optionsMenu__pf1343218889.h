#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTexture2D;
class UplayerSaveGame_C__pf533497531;
class UgameInfoInstance_C__pf533497531;
class UEditableTextBox;
class UButton;
class UTextBlock;
class UImage;
#include "optionsMenu__pf1343218889.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/MainMenu/optionsMenu.optionsMenu_C", OverrideNativeName="optionsMenu_C"))
class UoptionsMenu_C__pf1343218889 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Accept", Category="optionsMenu", OverrideNativeName="Accept"))
	UButton* bpv__Accept__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="backButton", Category="optionsMenu", OverrideNativeName="backButton"))
	UButton* bpv__backButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="currentAvatar", Category="optionsMenu", OverrideNativeName="currentAvatar"))
	UImage* bpv__currentAvatar__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_53", OverrideNativeName="TextBlock_53"))
	UTextBlock* bpv__TextBlock_53__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleLeft", Category="optionsMenu", OverrideNativeName="toggleLeft"))
	UButton* bpv__toggleLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleRight", Category="optionsMenu", OverrideNativeName="toggleRight"))
	UButton* bpv__toggleRight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="UserPlayerName", Category="optionsMenu", OverrideNativeName="UserPlayerName"))
	UEditableTextBox* bpv__UserPlayerName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Welcome Message Vis", Category="Default", OverrideNativeName="welcomeMessageVis"))
	ESlateVisibility bpv__welcomeMessageVis__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game INstance Ref", Category="Default", OverrideNativeName="gameINstanceRef"))
	UgameInfoInstance_C__pf533497531* bpv__gameINstanceRef__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Entered Player Name", Category="Default", OverrideNativeName="enteredPlayerName"))
	FText bpv__enteredPlayerName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Info", Category="Default", OverrideNativeName="playerInfo"))
	FPlayerInfo__pf533497531 bpv__playerInfo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Avatar Image", Category="Default", OverrideNativeName="avatarImage"))
	UTexture2D* bpv__avatarImage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Settings Save", Category="Default", OverrideNativeName="playerSettingsSave"))
	FString bpv__playerSettingsSave__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Found Save Game?", Category="Default", OverrideNativeName="foundSaveGame?"))
	bool bpv__foundSaveGamex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Save Game REF", Category="Default", OverrideNativeName="saveGameREF"))
	UplayerSaveGame_C__pf533497531* bpv__saveGameREF__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="All Avatars", Category="Default", OverrideNativeName="allAvatars"))
	TArray<UTexture2D*> bpv__allAvatars__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Avatar Count", Category="Default", OverrideNativeName="avatarCount"))
	int32 bpv__avatarCount__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Accept Enabled?", Category="Default", OverrideNativeName="acceptEnabled?"))
	bool bpv__acceptEnabledx__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Text"))
	FText b0l__K2Node_ComponentBoundEvent_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Info_Instance"))
	UgameInfoInstance_C__pf533497531* b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTexture2D* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item2"))
	UTexture2D* b0l__CallFunc_Array_Get_Item2__pf;
	UoptionsMenu_C__pf1343218889(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_optionsMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_optionsMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_optionsMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_optionsMenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_optionsMenu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_optionsMenu__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleRight_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleLeft_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Accept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__backButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__UserPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__UserPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature__pf(/*out*/ FText const& bpp__Text__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="saveGameCheck"))
	virtual void bpf__saveGameCheck__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="emptyNameCheck"))
	virtual void bpf__emptyNameCheck__pf(const FText& bpp__nameText__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="setupAvatarDisplay"))
	virtual void bpf__setupAvatarDisplay__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="saveGame"))
	virtual void bpf__saveGame__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="loadGame"))
	virtual void bpf__loadGame__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="GetbIsEnabled_0"))
	virtual bool  bpf__GetbIsEnabled_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="toggleBackButtonDisplay"))
	virtual ESlateVisibility  bpf__toggleBackButtonDisplay__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_backButton_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_backButton_Visibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
