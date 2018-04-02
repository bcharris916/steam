#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTexture2D;
class UTextBlock;
class UImage;
class UButton;
class AlobbyGM_C__pf2687806415;
#include "playerButton__pf3941786787.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Lobby/playerButton.playerButton_C", OverrideNativeName="playerButton_C"))
class UplayerButton_C__pf3941786787 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="playerButton", Category="playerButton", OverrideNativeName="playerButton"))
	UButton* bpv__playerButton__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="selectedCharImage", Category="playerButton", OverrideNativeName="selectedCharImage"))
	UImage* bpv__selectedCharImage__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Info", Category="Default", ExposeOnSpawn="true", OverrideNativeName="playerInfo"))
	FPlayerInfo__pf533497531 bpv__playerInfo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Name Player", Category="Default", OverrideNativeName="namePlayer"))
	FText bpv__namePlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Image Avatar", Category="Default", OverrideNativeName="imageAvatar"))
	UTexture2D* bpv__imageAvatar__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Player ID", Category="Default", ExposeOnSpawn="true", OverrideNativeName="playerID"))
	int32 bpv__playerID__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsLobby_GM"))
	AlobbyGM_C__pf2687806415* b0l__K2Node_DynamicCast_AsLobby_GM__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UplayerButton_C__pf3941786787(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_playerButton__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_playerButton__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__playerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__playerButton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
