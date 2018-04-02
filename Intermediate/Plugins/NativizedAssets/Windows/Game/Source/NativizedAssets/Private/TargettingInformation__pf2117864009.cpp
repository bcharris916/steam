#include "NativizedAssets.h"
#include "TargettingInformation__pf2117864009.h"
FTargettingInformation__pf2117864009 FTargettingInformation__pf2117864009::GetDefaultValue()
{
	FStructOnScope StructOnScope(FTargettingInformation__pf2117864009::StaticStruct());
	FTargettingInformation__pf2117864009& DefaultData__ = *((FTargettingInformation__pf2117864009*)StructOnScope.GetStructMemory());
	return DefaultData__;
}
void FTargettingInformation__pf2117864009::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
struct FRegisterHelper__FTargettingInformation__pf2117864009
{
	FRegisterHelper__FTargettingInformation__pf2117864009()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/gameplay/Attacks/TargettingInformation"), &FTargettingInformation__pf2117864009::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FTargettingInformation__pf2117864009 Instance;
};
FRegisterHelper__FTargettingInformation__pf2117864009 FRegisterHelper__FTargettingInformation__pf2117864009::Instance;
