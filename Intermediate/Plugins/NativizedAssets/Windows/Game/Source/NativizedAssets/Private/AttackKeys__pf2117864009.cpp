#include "NativizedAssets.h"
#include "AttackKeys__pf2117864009.h"
FText E__AttackKeys__pf__GetUserFriendlyName(int32 InValue)
{
	FText Text;
	const auto EnumValue = static_cast<E__AttackKeys__pf>(InValue);
	switch(EnumValue)
	{
		case E__AttackKeys__pf::NewEnumerator0: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[80F880E24E5F63B4C5DDE3AC37ACB098]\", \"034A0CF64BDAA320E1EF3885BD6CC899\", \"AttackA\")"), Text); break;
		case E__AttackKeys__pf::NewEnumerator1: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[80F880E24E5F63B4C5DDE3AC37ACB098]\", \"A772EAA74F180B076C130BA6FD33DB2F\", \"AttackB\")"), Text); break;
		case E__AttackKeys__pf::NewEnumerator2: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[80F880E24E5F63B4C5DDE3AC37ACB098]\", \"147FDC5A44FC9B7F365B70B2D163F489\", \"AttackC\")"), Text); break;
		case E__AttackKeys__pf::NewEnumerator3: FTextStringHelper::ReadFromString(TEXT("NSLOCTEXT(\"[80F880E24E5F63B4C5DDE3AC37ACB098]\", \"9BF8A90C4BCAD51CE9CFA0AC48C12FEF\", \"AttackD\")"), Text); break;
		case E__AttackKeys__pf::E__AttackKeys__pf_MAX: FTextStringHelper::ReadFromString(TEXT("Attack Keys MAX"), Text); break;
		default: ensure(false);
	};
	return Text;
};
