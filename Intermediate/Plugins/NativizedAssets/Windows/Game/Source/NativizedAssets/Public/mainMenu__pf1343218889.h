#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UgameInfoInstance_C__pf533497531;
class UButton;
#include "mainMenu__pf1343218889.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/MainMenu/mainMenu.mainMenu_C", OverrideNativeName="mainMenu_C"))
class UmainMenu_C__pf1343218889 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FIndButton", Category="mainMenu", OverrideNativeName="FIndButton"))
	UButton* bpv__FIndButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="HostButton", Category="mainMenu", OverrideNativeName="HostButton"))
	UButton* bpv__HostButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="OptionsButton", Category="mainMenu", OverrideNativeName="OptionsButton"))
	UButton* bpv__OptionsButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="QuitButton", Category="mainMenu", OverrideNativeName="QuitButton"))
	UButton* bpv__QuitButton__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Instance Ref", Category="Default", OverrideNativeName="gameInstanceRef"))
	UgameInfoInstance_C__pf533497531* bpv__gameInstanceRef__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Info_Instance"))
	UgameInfoInstance_C__pf533497531* b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UmainMenu_C__pf1343218889(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_mainMenu__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_mainMenu__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_mainMenu__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_mainMenu__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_mainMenu__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__OptionsButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__FIndButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__FIndButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__HostButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__HostButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
