#include "NativizedAssets.h"
#include "MovementInformation__pf2117864009.h"
FMovementInformation__pf2117864009 FMovementInformation__pf2117864009::GetDefaultValue()
{
	FStructOnScope StructOnScope(FMovementInformation__pf2117864009::StaticStruct());
	FMovementInformation__pf2117864009& DefaultData__ = *((FMovementInformation__pf2117864009*)StructOnScope.GetStructMemory());
	return DefaultData__;
}
void FMovementInformation__pf2117864009::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
}
struct FRegisterHelper__FMovementInformation__pf2117864009
{
	FRegisterHelper__FMovementInformation__pf2117864009()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/gameplay/Attacks/MovementInformation"), &FMovementInformation__pf2117864009::__StaticDependenciesAssets);
	}
	static FRegisterHelper__FMovementInformation__pf2117864009 Instance;
};
FRegisterHelper__FMovementInformation__pf2117864009 FRegisterHelper__FMovementInformation__pf2117864009::Instance;
