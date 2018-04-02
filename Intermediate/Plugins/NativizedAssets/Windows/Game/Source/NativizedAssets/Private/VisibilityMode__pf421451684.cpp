#include "NativizedAssets.h"
#include "VisibilityMode__pf421451684.h"
FText E__VisibilityMode__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__VisibilityMode__pf>(InValue);
	switch(EnumValue)
	{
		case E__VisibilityMode__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[3AF8E5D2400772FCEE0CFBB41EC987E8]\", \"3CA1EFBB4511FB19233B95BF1C175BD3\", \"AlwaysVisible\")"), Text); break;
		case E__VisibilityMode__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[3AF8E5D2400772FCEE0CFBB41EC987E8]\", \"C88A1BFD4703CC8D11476EAD1B718F71\", \"HiddenInFOW\")"), Text); break;
		case E__VisibilityMode__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[3AF8E5D2400772FCEE0CFBB41EC987E8]\", \"7F697E2A44B8DEBA555E308FFC9C5CF4\", \"HiddenUntilDiscovered\")"), Text); break;
		case E__VisibilityMode__pf::E__VisibilityMode__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Visibility Mode MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
