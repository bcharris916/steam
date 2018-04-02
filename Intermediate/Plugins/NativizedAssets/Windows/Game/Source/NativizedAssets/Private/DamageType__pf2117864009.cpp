#include "NativizedAssets.h"
#include "DamageType__pf2117864009.h"
FText E__DamageType__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__DamageType__pf>(InValue);
	switch(EnumValue)
	{
		case E__DamageType__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E87F58F04B84ED86C11CDCA0F01FDC52]\", \"E589AFC94588FA1E2F40F2AECDD9362A\", \"Necrotic\")"), Text); break;
		case E__DamageType__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E87F58F04B84ED86C11CDCA0F01FDC52]\", \"AC8A8244443F1340430EEEB61A2836DA\", \"Bashing\")"), Text); break;
		case E__DamageType__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E87F58F04B84ED86C11CDCA0F01FDC52]\", \"A0B8516D473137CA363EA4AB2E686597\", \"Slashing\")"), Text); break;
		case E__DamageType__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E87F58F04B84ED86C11CDCA0F01FDC52]\", \"5FBB9B9F4923E91E9B3318AD79D874C7\", \"Piercing\")"), Text); break;
		case E__DamageType__pf::NewEnumerator4: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E87F58F04B84ED86C11CDCA0F01FDC52]\", \"C09296B64A9FADFAAD50E0A22B33ADE4\", \"Fire\")"), Text); break;
		case E__DamageType__pf::NewEnumerator5: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E87F58F04B84ED86C11CDCA0F01FDC52]\", \"EE00DF874A7FAC40E97F5D88621F8BAD\", \"Lightning\")"), Text); break;
		case E__DamageType__pf::NewEnumerator6: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[E87F58F04B84ED86C11CDCA0F01FDC52]\", \"00C82D744ACBDED902B524AD46FB7490\", \"Holy\")"), Text); break;
		case E__DamageType__pf::E__DamageType__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Damage Type MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
