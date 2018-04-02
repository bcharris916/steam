#include "NativizedAssets.h"
#include "playerSaveGame__pf533497531.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UplayerSaveGame_C__pf533497531::UplayerSaveGame_C__pf533497531(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UplayerSaveGame_C__pf533497531::StaticClass() == GetClass()))
	{
		UplayerSaveGame_C__pf533497531::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__S_PlayerINfo__pf.bpv__myPlayerName_2_816FFE264C08408F09C26C8C7F8CDB1A__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Default"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("FCCDCE27438B7835895E47AD475C835C") /* Key */
	);
	bpv__S_PlayerINfo__pf.bpv__myPlayerImage_5_E3B8ED5F4387C5691564BF96105E1E15__pf = CastChecked<UTexture2D>(CastChecked<UDynamicClass>(UplayerSaveGame_C__pf533497531::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__S_PlayerINfo__pf.bpv__myPlayerStatus_14_F1604291452782409E92779450FED1BE__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Not Ready"), /* Literal Text */
	TEXT(""), /* Namespace */
	TEXT("0A30DD434ACD58561AD3B897574F0563") /* Key */
	);
}
void UplayerSaveGame_C__pf533497531::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UplayerSaveGame_C__pf533497531::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted structures
	extern UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo__pf533497531();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UScriptStruct_FPlayerInfo__pf533497531());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
}
void UplayerSaveGame_C__pf533497531::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{69, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Texture2D /Game/InfinityBladeWarriors/Character/CompleteCharacters/Textures_Materials/CharM_Cardboard/Char_M_Cardboard_D.Char_M_Cardboard_D 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
void UplayerSaveGame_C__pf533497531::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{80, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.SaveGame 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/allLevels/PlayerInfo.PlayerInfo 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__UplayerSaveGame_C__pf533497531
{
	FRegisterHelper__UplayerSaveGame_C__pf533497531()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/allLevels/playerSaveGame"), &UplayerSaveGame_C__pf533497531::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UplayerSaveGame_C__pf533497531 Instance;
};
FRegisterHelper__UplayerSaveGame_C__pf533497531 FRegisterHelper__UplayerSaveGame_C__pf533497531::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
