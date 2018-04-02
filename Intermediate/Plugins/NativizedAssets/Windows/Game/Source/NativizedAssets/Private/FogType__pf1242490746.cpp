#include "NativizedAssets.h"
#include "FogType__pf1242490746.h"
FText E__FogType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__FogType__pf>(InValue);
	switch(EnumValue)
	{
		case E__FogType__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[829AAB404AEBC177C485C4B4CD2060A9]\", \"DCAD91994962ABF96FB2F9B71E78E295\", \"Opaque\")"), Text); break;
		case E__FogType__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[829AAB404AEBC177C485C4B4CD2060A9]\", \"091B27DA4BA0CF389E8B86BBF580D4D4\", \"Transparent\")"), Text); break;
		case E__FogType__pf::E__FogType__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Fog Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
