#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "FogType__pf1242490746.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class AFogDrawingActor_C__pf1242490746;
class UCheckBox;
class USlider;
class UComboBoxString;
#include "UMG_FogControl__pf421451684.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/FogOfWar/ExampleMap/Blueprints/UMG_FogControl.UMG_FogControl_C", OverrideNativeName="UMG_FogControl_C"))
class UUMG_FogControl_C__pf421451684 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="ConeOfVisionCheck", Category="UMG_FogControl", OverrideNativeName="ConeOfVisionCheck"))
	UCheckBox* bpv__ConeOfVisionCheck__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="DrawFogCheck", Category="UMG_FogControl", OverrideNativeName="DrawFogCheck"))
	UCheckBox* bpv__DrawFogCheck__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="FogTypeSelect", Category="UMG_FogControl", OverrideNativeName="FogTypeSelect"))
	UComboBoxString* bpv__FogTypeSelect__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="LineOfSightCheck", Category="UMG_FogControl", OverrideNativeName="LineOfSightCheck"))
	UCheckBox* bpv__LineOfSightCheck__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RadiusSlider", Category="UMG_FogControl", OverrideNativeName="RadiusSlider"))
	USlider* bpv__RadiusSlider__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="RangeSlider", Category="UMG_FogControl", OverrideNativeName="RangeSlider"))
	USlider* bpv__RangeSlider__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="SizeSlider", Category="UMG_FogControl", OverrideNativeName="SizeSlider"))
	USlider* bpv__SizeSlider__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="VisionCircleCheck", Category="UMG_FogControl", OverrideNativeName="VisionCircleCheck"))
	UCheckBox* bpv__VisionCircleCheck__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Fog Drawing Actor", Category="Default", OverrideNativeName="FogDrawingActor"))
	AFogDrawingActor_C__pf1242490746* bpv__FogDrawingActor__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Mod Type", Category="Default", OverrideNativeName="ModType"))
	int32 bpv__ModType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	E__FogType__pf b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable2"))
	E__FogType__pf b0l__Temp_byte_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_GetAllActorsOfClass_OutActors"))
	TArray<AFogDrawingActor_C__pf1242490746*> b0l__CallFunc_GetAllActorsOfClass_OutActors__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_Array_Get_Item"))
	AFogDrawingActor_C__pf1242490746* b0l__CallFunc_Array_Get_Item__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked4"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value3"))
	float b0l__K2Node_ComponentBoundEvent_Value3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	E__FogType__pf b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked3"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value2"))
	float b0l__K2Node_ComponentBoundEvent_Value2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked2"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Value"))
	float b0l__K2Node_ComponentBoundEvent_Value__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectedItem"))
	FString b0l__K2Node_ComponentBoundEvent_SelectedItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SelectionType"))
	TEnumAsByte<ESelectInfo::Type> b0l__K2Node_ComponentBoundEvent_SelectionType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bIsChecked"))
	bool b0l__K2Node_ComponentBoundEvent_bIsChecked__pf;
	UUMG_FogControl_C__pf421451684(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_UMG_FogControl__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UMG_FogControl__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UMG_FogControl__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UMG_FogControl__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_UMG_FogControl__pf_4(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__LineOfSightCheck_K2Node_ComponentBoundEvent_160_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__LineOfSightCheck_K2Node_ComponentBoundEvent_160_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__FogTypeSelect_K2Node_ComponentBoundEvent_151_OnSelectionChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__FogTypeSelect_K2Node_ComponentBoundEvent_151_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__SizeSlider_K2Node_ComponentBoundEvent_131_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__SizeSlider_K2Node_ComponentBoundEvent_131_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__ConeOfVisionCheck_K2Node_ComponentBoundEvent_124_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__ConeOfVisionCheck_K2Node_ComponentBoundEvent_124_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_118_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__RadiusSlider_K2Node_ComponentBoundEvent_118_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__VisionCircleCheck_K2Node_ComponentBoundEvent_113_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__VisionCircleCheck_K2Node_ComponentBoundEvent_113_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__RangeSlider_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__RangeSlider_K2Node_ComponentBoundEvent_109_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__DrawFogCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature"))
	virtual void bpf__BndEvt__DrawFogCheck_K2Node_ComponentBoundEvent_106_OnCheckBoxComponentStateChanged__DelegateSignature__pf(bool bpp__bIsChecked__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
