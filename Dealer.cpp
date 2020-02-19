#include "Dealer.h"

void Dealer::revealHoleCard()
{
}

Card* Dealer::hit()
{
	return deck->getNextCard();
}
