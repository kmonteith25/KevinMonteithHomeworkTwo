#include "Dealer.h"


void Dealer::revealHoleCard()
{
}

void Dealer::shuffle()
{
	deck->shuffle();
}


Card* Dealer::hit()
{
	return deck->getNextCard();
}
