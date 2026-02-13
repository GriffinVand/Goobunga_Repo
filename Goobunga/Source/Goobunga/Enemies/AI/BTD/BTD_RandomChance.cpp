#include "BTD_RandomChance.h"

bool UBTD_RandomChance::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	return FMath::RandRange(RangeStart, RangeEnd) == 0;
}
