#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "PlayerInfo__pf533497531.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UTexture2D;
class UTextBlock;
class UImage;
#include "connectedPlayer__pf3941786787.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/Lobby/connectedPlayer.connectedPlayer_C", OverrideNativeName="connectedPlayer_C"))
class UconnectedPlayer_C__pf3941786787 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="avatarImage", Category="connectedPlayer", OverrideNativeName="avatarImage"))
	UImage* bpv__avatarImage__pf;
	UPROPERTY(BlueprintReadWrite, Export, meta=(DisplayName="selectedCharImage", Category="connectedPlayer", OverrideNativeName="selectedCharImage"))
	UImage* bpv__selectedCharImage__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_0", OverrideNativeName="TextBlock_0"))
	UTextBlock* bpv__TextBlock_0__pf;
	UPROPERTY(Export, meta=(DisplayName="TextBlock_1", OverrideNativeName="TextBlock_1"))
	UTextBlock* bpv__TextBlock_1__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Info", Category="Default", ExposeOnSpawn="true", OverrideNativeName="playerInfo"))
	FPlayerInfo__pf533497531 bpv__playerInfo__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Name Of Player", Category="Default", OverrideNativeName="nameOfPlayer"))
	FText bpv__nameOfPlayer__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Avatar", Category="Default", OverrideNativeName="playerAvatar"))
	UTexture2D* bpv__playerAvatar__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Char Image", Category="Default", OverrideNativeName="playerCharImage"))
	UTexture2D* bpv__playerCharImage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Replicated, meta=(DisplayName="Player Status", Category="Default", OverrideNativeName="playerStatus"))
	FText bpv__playerStatus__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_IsDesignTime"))
	bool b0l__K2Node_Event_IsDesignTime__pf;
	UconnectedPlayer_C__pf3941786787(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_connectedPlayer__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_connectedPlayer__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Called by both the game and the editor.  Allows users to run initial setup for their widgets to better previewthe setup in the designer and since generally that same setup code is required at runtime, it\'s called thereas well.**WARNING**This is intended purely for cosmetic updates using locally owned data, you can not safely access any game relatedstate, if you call something that doesn\'t expect to be run at editor time, you may crash the editor.In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn offPreConstruct evaluation in the Widget Designer settings in the Editor Preferences.", CppFromBpEvent, OverrideNativeName="PreConstruct"))
	void bpf__PreConstruct__pf(bool bpp__IsDesignTime__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnRep_nameOfPlayer"))
	virtual void bpf__OnRep_nameOfPlayer__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
