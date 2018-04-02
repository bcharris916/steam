#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UScrollBox;
class UEditableTextBox;
class AgameplayPC_C__pf1836565435;
class AlobbyPlayerController_C__pf2687806415;
#include "chatWIndow__pf1207061625.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/allLevels/chatWIndow.chatWIndow_C", OverrideNativeName="chatWIndow_C"))
class UchatWIndow_C__pf1207061625 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="chatEntry", Category="chatWIndow", OverrideNativeName="chatEntry"))
	UEditableTextBox* bpv__chatEntry__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="chatLog", Category="chatWIndow", OverrideNativeName="chatLog"))
	UScrollBox* bpv__chatLog__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_sender"))
	FText b0l__K2Node_CustomEvent_sender__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_text"))
	FText b0l__K2Node_CustomEvent_text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeStruct_FormatArgumentData2"))
	FFormatArgumentData b0l__K2Node_MakeStruct_FormatArgumentData2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_MakeArray_Array"))
	TArray<FFormatArgumentData> b0l__K2Node_MakeArray_Array__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Text"))
	FText b0l__K2Node_ComponentBoundEvent_Text__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_CommitMethod"))
	TEnumAsByte<ETextCommit::Type> b0l__K2Node_ComponentBoundEvent_CommitMethod__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsGameplay_PC"))
	AgameplayPC_C__pf1836565435* b0l__K2Node_DynamicCast_AsGameplay_PC__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_Player_Controller"))
	AlobbyPlayerController_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_Player_Controller__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UchatWIndow_C__pf1207061625(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_chatWIndow__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_chatWIndow__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__chatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__chatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature__pf(/*out*/ FText const& bpp__Text__pf__const, ETextCommit::Type bpp__CommitMethod__pf);
	UFUNCTION(Server, Reliable, BlueprintCallable, meta=(Category, OverrideNativeName="updateChatWindow"))
	virtual void bpf__updateChatWindow__pf(const FText& bpp__sender__pf__const, const FText& bpp__text__pf__const);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
