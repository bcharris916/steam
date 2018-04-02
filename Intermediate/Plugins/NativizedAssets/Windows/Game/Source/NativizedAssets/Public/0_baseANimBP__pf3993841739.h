#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
class A0_base_C__pf1490413170;
#include "0_baseANimBP__pf3993841739.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/InfinityBladeWarriors/animations/0_baseANimBP.0_baseANimBP_C", OverrideNativeName="0_baseANimBP_C"))
class U0_baseANimBP_C__pf3993841739 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_522C72D54C1934CB28ABF68022B46AA6"))
	FAnimNode_Root bpv__AnimGraphNode_Root_522C72D54C1934CB28ABF68022B46AA6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_5B7D03C24578DAD19F1FE4BFCED5298F"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_5B7D03C24578DAD19F1FE4BFCED5298F__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_D210B0DC46C80C821ED721BDDFAA854D"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_D210B0DC46C80C821ED721BDDFAA854D__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_C4D843C04B4D67012ABB9A9DADF3A8C6"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_C4D843C04B4D67012ABB9A9DADF3A8C6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_B474AEE64795A08EE3D74AB1ACF93DCA"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_B474AEE64795A08EE3D74AB1ACF93DCA__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_B39D1C97455629C227ED348C9DFB47E9"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_B39D1C97455629C227ED348C9DFB47E9__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_5D19B4694CB5BAD9CD380B83F95C870F"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_5D19B4694CB5BAD9CD380B83F95C870F__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_FA1A52534BF1D86854CCC48554D2B669"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_FA1A52534BF1D86854CCC48554D2B669__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_F81902EE402D4D77BBC96B867B50F8D0"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_F81902EE402D4D77BBC96B867B50F8D0__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_9D07B1F24F049A348632E7BEFE58C2F1"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_9D07B1F24F049A348632E7BEFE58C2F1__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_764F546945656D2A6F55CE9853FBD103"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_764F546945656D2A6F55CE9853FBD103__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine_D65F367A4D1038E468A6FDB0AA5DCD28"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine_D65F367A4D1038E468A6FDB0AA5DCD28__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is in Air?", Category="Default", OverrideNativeName="IsInAir?"))
	bool bpv__IsInAirx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Local Cast Q", Category="Default", OverrideNativeName="localCastQ"))
	bool bpv__localCastQ__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Local Can Move", Category="Default", OverrideNativeName="localCanMove"))
	bool bpv__localCanMove__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Local Cast W", Category="Default", OverrideNativeName="localCastW"))
	bool bpv__localCastW__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_As0_Base"))
	A0_base_C__pf1490413170* b0l__K2Node_DynamicCast_As0_Base__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	U0_baseANimBP_C__pf3993841739(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_0_baseANimBP__pf_7(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="setStates"))
	virtual void bpf__setStates__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="AnimNotify_castOver"))
	virtual void bpf__AnimNotify_castOver__pf();
	UFUNCTION(meta=(ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_D210B0DC46C80C821ED721BDDFAA854D"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_D210B0DC46C80C821ED721BDDFAA854D__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_BlendSpacePlayer_9D07B1F24F049A348632E7BEFE58C2F1"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_BlendSpacePlayer_9D07B1F24F049A348632E7BEFE58C2F1__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_B474AEE64795A08EE3D74AB1ACF93DCA"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_B474AEE64795A08EE3D74AB1ACF93DCA__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_5B7D03C24578DAD19F1FE4BFCED5298F"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_5B7D03C24578DAD19F1FE4BFCED5298F__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_C4D843C04B4D67012ABB9A9DADF3A8C6"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_0_baseANimBP_AnimGraphNode_TransitionResult_C4D843C04B4D67012ABB9A9DADF3A8C6__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_localCastW"))
	virtual void bpf__OnRep_localCastW__pf();
public:
};
