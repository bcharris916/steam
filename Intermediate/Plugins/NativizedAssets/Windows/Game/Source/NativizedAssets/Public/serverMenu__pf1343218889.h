#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "FindSessionsCallbackProxy.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UgameInfoInstance_C__pf533497531;
class UButton;
class UWidgetSwitcher;
class UTextBlock;
class UCircularThrobber;
class UFindSessionsCallbackProxy;
#include "serverMenu__pf1343218889.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/MainMenu/serverMenu.serverMenu_C", OverrideNativeName="serverMenu_C"))
class UserverMenu_C__pf1343218889 : public UUserWidget
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="BlueprintFindSessionsResultDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0, TArray<FBlueprintSessionResult> const& , bpp__Results__pf);
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Accept", Category="serverMenu", OverrideNativeName="Accept"))
	UButton* bpv__Accept__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="backButton", Category="serverMenu", OverrideNativeName="backButton"))
	UButton* bpv__backButton__pf;
	UPROPERTY(Export, meta=(DisplayName="count", OverrideNativeName="count"))
	UTextBlock* bpv__count__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="Loading", Category="serverMenu", OverrideNativeName="Loading"))
	UCircularThrobber* bpv__Loading__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_65", OverrideNativeName="TextBlock_65"))
	UTextBlock* bpv__TextBlock_65__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_67", OverrideNativeName="TextBlock_67"))
	UTextBlock* bpv__TextBlock_67__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleDisplayedWidget", Category="serverMenu", OverrideNativeName="toggleDisplayedWidget"))
	UWidgetSwitcher* bpv__toggleDisplayedWidget__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleLeft", Category="serverMenu", OverrideNativeName="toggleLeft"))
	UButton* bpv__toggleLeft__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="toggleRight", Category="serverMenu", OverrideNativeName="toggleRight"))
	UButton* bpv__toggleRight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Play Mode Text", Category="Default", OverrideNativeName="playModeText"))
	FText bpv__playModeText__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Instance REF", Category="Default", OverrideNativeName="gameInstanceREF"))
	UgameInfoInstance_C__pf533497531* bpv__gameInstanceREF__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Enable LAN", Category="Default", OverrideNativeName="enableLAN"))
	bool bpv__enableLAN__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Sessionfound?", Category="Default", OverrideNativeName="sessionfound?"))
	bool bpv__sessionfoundx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Available Session", Category="Default", OverrideNativeName="availableSession"))
	FBlueprintSessionResult bpv__availableSession__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Play Mode Header", Category="Default", OverrideNativeName="playModeHeader"))
	FText bpv__playModeHeader__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Timer Value", Category="Default", OverrideNativeName="timerValue"))
	int32 bpv__timerValue__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Button Visibilty", Category="Default", OverrideNativeName="buttonVisibilty"))
	ESlateVisibility bpv__buttonVisibilty__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Found Session", Category="Default", OverrideNativeName="foundSession"))
	TArray<FBlueprintSessionResult> bpv__foundSession__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Num Of Sessions Result", Category="Default", OverrideNativeName="numOfSessionsResult"))
	int32 bpv__numOfSessionsResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Results2"))
	TArray<FBlueprintSessionResult> b0l__K2Node_CustomEvent_Results2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_Results"))
	TArray<FBlueprintSessionResult> b0l__K2Node_CustomEvent_Results__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	TArray<FBlueprintSessionResult> b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	FTimerDynamicDelegate b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate3"))
	F__BlueprintFindSessionsResultDelegate__DelegateSignature__SC_0 b0l__K2Node_CreateDelegate_OutputDelegate3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Loop_Counter_Variable"))
	int32 b0l__Temp_int_Loop_Counter_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Array_Index_Variable"))
	int32 b0l__Temp_int_Array_Index_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	FBlueprintSessionResult b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_FindSessions_ReturnValue"))
	UFindSessionsCallbackProxy* b0l__CallFunc_FindSessions_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_IsValid_ReturnValue"))
	bool b0l__CallFunc_IsValid_ReturnValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Info_Instance"))
	UgameInfoInstance_C__pf533497531* b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_True_if_break_was_hit_Variable"))
	bool b0l__Temp_bool_True_if_break_was_hit_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_sessionToJoin"))
	FBlueprintSessionResult b0l__K2Node_CustomEvent_sessionToJoin__pf;
	UserverMenu_C__pf1343218889(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_serverMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_serverMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_serverMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_serverMenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_serverMenu__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_serverMenu__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_serverMenu__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_serverMenu__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="resetTimer"))
	virtual void bpf__resetTimer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="sessionTimer"))
	virtual void bpf__sessionTimer__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="displaySession"))
	virtual void bpf__displaySession__pf(FBlueprintSessionResult bpp__sessionToJoin__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Accept_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__backButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleRight_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleRight_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__toggleLeft_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__toggleLeft_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_06B36603493EC14C3BD9AA8126C7257E"))
	virtual void bpf__OnSuccess_06B36603493EC14C3BD9AA8126C7257E__pf(/*out*/ TArray<FBlueprintSessionResult> const& bpp__Results__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFailure_06B36603493EC14C3BD9AA8126C7257E"))
	virtual void bpf__OnFailure_06B36603493EC14C3BD9AA8126C7257E__pf(/*out*/ TArray<FBlueprintSessionResult> const& bpp__Results__pf__const);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="handleCountdown"))
	virtual void bpf__handleCountdown__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="convertCountdown"))
	virtual FText  bpf__convertCountdown__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
