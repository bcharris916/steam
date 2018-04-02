#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTexture2D;
class UButton;
class UgameInfoInstance_C__pf533497531;
class AlobbyPlayerController_C__pf2687806415;
#include "characterSelect__pf3941786787.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Lobby/characterSelect.characterSelect_C", OverrideNativeName="characterSelect_C"))
class UcharacterSelect_C__pf3941786787 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="backButton", Category="characterSelect", OverrideNativeName="backButton"))
	UButton* bpv__backButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="barbarous", Category="characterSelect", OverrideNativeName="barbarous"))
	UButton* bpv__barbarous__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="emptyButton", Category="characterSelect", OverrideNativeName="emptyButton"))
	UButton* bpv__emptyButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="forge", Category="characterSelect", OverrideNativeName="forge"))
	UButton* bpv__forge__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="frosty", Category="characterSelect", OverrideNativeName="frosty"))
	UButton* bpv__frosty__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Game Instance REF", Category="Default", OverrideNativeName="gameInstanceREF"))
	UgameInfoInstance_C__pf533497531* bpv__gameInstanceREF__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char Buttons", Category="Default", OverrideNativeName="charButtons"))
	TArray<UButton*> bpv__charButtons__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Char Select ID", Category="Default", OverrideNativeName="charSelectID"))
	int32 bpv__charSelectID__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Char Images", Category="Default", OverrideNativeName="charImages"))
	TArray<UTexture2D*> bpv__charImages__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGame_Info_Instance"))
	UgameInfoInstance_C__pf533497531* b0l__K2Node_DynamicCast_AsGame_Info_Instance__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<UButton*> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	UTexture2D* b0l__CallFunc_Array_Get_Item__pf;
	UcharacterSelect_C__pf3941786787(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_characterSelect__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_characterSelect__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__backButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__backButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__frosty_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__frosty_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__forge_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__forge_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__barbarous_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__barbarous_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__emptyButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__emptyButton_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
