#include "NativizedAssets.h"
#include "damageInformation__pf2117864009.h"
FDamageInformation__pf2117864009 FDamageInformation__pf2117864009::GetDefaultValue()
{
	FStructOnScope StructOnScope(FDamageInformation__pf2117864009::StaticStruct());
	FDamageInformation__pf2117864009& DefaultData__ = *((FDamageInformation__pf2117864009*)StructOnScope.GetStructMemory());
	return DefaultData__;
}
void FDamageInformation__pf2117864009::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
struct FRegisterHelper__FDamageInformation__pf2117864009
{
	FRegisterHelper__FDamageInformation__pf2117864009()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/gameplay/Attacks/damageInformation"), &FDamageInformation__pf2117864009::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FDamageInformation__pf2117864009 Instance;
};
FRegisterHelper__FDamageInformation__pf2117864009 FRegisterHelper__FDamageInformation__pf2117864009::Instance;
