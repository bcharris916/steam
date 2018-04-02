#include "NativizedAssets.h"
#include "AnimationInformation__pf2117864009.h"
FAnimationInformation__pf2117864009 FAnimationInformation__pf2117864009::GetDefaultValue()
{
	FStructOnScope StructOnScope(FAnimationInformation__pf2117864009::StaticStruct());
	FAnimationInformation__pf2117864009& DefaultData__ = *((FAnimationInformation__pf2117864009*)StructOnScope.GetStructMemory());
	return DefaultData__;
}
void FAnimationInformation__pf2117864009::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
struct FRegisterHelper__FAnimationInformation__pf2117864009
{
	FRegisterHelper__FAnimationInformation__pf2117864009()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/gameplay/Attacks/AnimationInformation"), &FAnimationInformation__pf2117864009::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FAnimationInformation__pf2117864009 Instance;
};
FRegisterHelper__FAnimationInformation__pf2117864009 FRegisterHelper__FAnimationInformation__pf2117864009::Instance;
