#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTexture2D;
class UButton;
class UWidgetSwitcher;
class UTextBlock;
class UScrollBox;
class UImage;
class AlobbyGM_C__pf2687806415;
#include "gameSettings__pf3941786787.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Lobby/gameSettings.gameSettings_C", OverrideNativeName="gameSettings_C"))
class UgameSettings_C__pf3941786787 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Accept", Category="gameSettings", OverrideNativeName="Accept"))
	UButton* bpv__Accept__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="backButton", Category="gameSettings", OverrideNativeName="backButton"))
	UButton* bpv__backButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="currentAvatar", Category="gameSettings", OverrideNativeName="currentAvatar"))
	UImage* bpv__currentAvatar__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="kickButton", Category="gameSettings", OverrideNativeName="kickButton"))
	UButton* bpv__kickButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="playersWIndow", Category="gameSettings", OverrideNativeName="playersWIndow"))
	UScrollBox* bpv__playersWIndow__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="settingsButton", Category="gameSettings", OverrideNativeName="settingsButton"))
	UButton* bpv__settingsButton__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_56", OverrideNativeName="TextBlock_56"))
	UTextBlock* bpv__TextBlock_56__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_171", OverrideNativeName="TextBlock_171"))
	UTextBlock* bpv__TextBlock_171__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggledDisplayeWidget", Category="gameSettings", OverrideNativeName="toggledDisplayeWidget"))
	UWidgetSwitcher* bpv__toggledDisplayeWidget__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleLeft", Category="gameSettings", OverrideNativeName="toggleLeft"))
	UButton* bpv__toggleLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleRight", Category="gameSettings", OverrideNativeName="toggleRight"))
	UButton* bpv__toggleRight__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleTimeLeft", Category="gameSettings", OverrideNativeName="toggleTimeLeft"))
	UButton* bpv__toggleTimeLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleTimeRight", Category="gameSettings", OverrideNativeName="toggleTimeRight"))
	UButton* bpv__toggleTimeRight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Displayed Map", Category="Default", OverrideNativeName="displayedMap"))
	UTexture2D* bpv__displayedMap__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Displayed Map Time", Category="Default", OverrideNativeName="displayedMapTime"))
	FText bpv__displayedMapTime__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Displayed Map Name", Category="Default", OverrideNativeName="displayedMapName"))
	FText bpv__displayedMapName__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Map ID", Category="Default", OverrideNativeName="mapID"))
	int32 bpv__mapID__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Time ID", Category="Default", OverrideNativeName="timeID"))
	int32 bpv__timeID__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger2_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger2_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchInteger3_CmpSuccess"))
	bool b0l__K2Node_SwitchInteger3_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_GM"))
	AlobbyGM_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_GM__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_GM2"))
	AlobbyGM_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_GM2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UgameSettings_C__pf3941786787(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_gameSettings__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameSettings__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameSettings__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameSettings__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameSettings__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameSettings__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameSettings__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_gameSettings__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__kickButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__kickButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__settingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__settingsButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__backButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleTimeRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleTimeRight_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleTimeLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleTimeLeft_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleRight_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleLeft_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="fillPlayersWindow"))
	virtual void bpf__fillPlayersWindow__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
