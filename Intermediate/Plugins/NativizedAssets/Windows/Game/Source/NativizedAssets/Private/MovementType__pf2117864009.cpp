#include "NativizedAssets.h"
#include "MovementType__pf2117864009.h"
FText E__MovementType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__MovementType__pf>(InValue);
	switch(EnumValue)
	{
		case E__MovementType__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[44FB68F44D1779921723F59F0BCEF8D0]\", \"B352AD6C4B0BC55DC856F197D97F75A3\", \"lunge\")"), Text); break;
		case E__MovementType__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[44FB68F44D1779921723F59F0BCEF8D0]\", \"1267A07E47FF20235D3AD7967A2E25F4\", \"leap\")"), Text); break;
		case E__MovementType__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[44FB68F44D1779921723F59F0BCEF8D0]\", \"51CF284143E768A904889A9FFDAE7FE9\", \"fly\")"), Text); break;
		case E__MovementType__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[44FB68F44D1779921723F59F0BCEF8D0]\", \"6BE2E05744C355BE168C84B3A9A10E7C\", \"slide\")"), Text); break;
		case E__MovementType__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[44FB68F44D1779921723F59F0BCEF8D0]\", \"1E09598F4FFC2CD8B936B0A9FD09A1D8\", \"stalwart\")"), Text); break;
		case E__MovementType__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[44FB68F44D1779921723F59F0BCEF8D0]\", \"C7713ADC4DEC7905ADEF97A8D1C9FF2A\", \"evadeOffensive\")"), Text); break;
		case E__MovementType__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[44FB68F44D1779921723F59F0BCEF8D0]\", \"56B0FE7E420AEDBD94090DA767EE5C00\", \"evadeDefensive\")"), Text); break;
		case E__MovementType__pf::E__MovementType__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Movement Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
