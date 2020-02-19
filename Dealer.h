#pragma once

#include "Deck.h"

class Dealer
{
public:
	void revealHoleCard();
	Card* hit();

private:
	Deck* deck = new Deck();
};

