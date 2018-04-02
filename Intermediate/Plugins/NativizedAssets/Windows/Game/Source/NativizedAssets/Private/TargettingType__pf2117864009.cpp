#include "NativizedAssets.h"
#include "TargettingType__pf2117864009.h"
FText E__TargettingType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__TargettingType__pf>(InValue);
	switch(EnumValue)
	{
		case E__TargettingType__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[2AB7857E45AB5B180AF4B3AAFFD6EC98]\", \"9C6D883F47B21FB0E7E0D5A65FE71344\", \"Chain\")"), Text); break;
		case E__TargettingType__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[2AB7857E45AB5B180AF4B3AAFFD6EC98]\", \"155B74C44472271BE28203A97C3948B5\", \"Circle\")"), Text); break;
		case E__TargettingType__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[2AB7857E45AB5B180AF4B3AAFFD6EC98]\", \"01BE417744CE7EA74B383AB84D49B39F\", \"Line\")"), Text); break;
		case E__TargettingType__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[2AB7857E45AB5B180AF4B3AAFFD6EC98]\", \"5FD2075A4ED04CB69D849ABA561E5A82\", \"Cone\")"), Text); break;
		case E__TargettingType__pf::E__TargettingType__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Targetting Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
