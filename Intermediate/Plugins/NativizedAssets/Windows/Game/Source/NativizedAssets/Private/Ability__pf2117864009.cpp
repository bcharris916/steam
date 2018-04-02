#include "NativizedAssets.h"
#include "Ability__pf2117864009.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
FAbility__pf2117864009 FAbility__pf2117864009::GetDefaultValue()
{
	FStructOnScope StructOnScope(FAbility__pf2117864009::StaticStruct());
	FAbility__pf2117864009& DefaultData__ = *((FAbility__pf2117864009*)StructOnScope.GetStructMemory());
	return DefaultData__;
}
void FAbility__pf2117864009::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{3, FBlueprintDependencyType(true, false, false, false)},  //  UserDefinedStruct /Game/Blueprints/gameplay/Attacks/TimingInformation.TimingInformation 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
struct FRegisterHelper__FAbility__pf2117864009
{
	FRegisterHelper__FAbility__pf2117864009()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/gameplay/Attacks/Ability"), &FAbility__pf2117864009::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FAbility__pf2117864009 Instance;
};
FRegisterHelper__FAbility__pf2117864009 FRegisterHelper__FAbility__pf2117864009::Instance;
