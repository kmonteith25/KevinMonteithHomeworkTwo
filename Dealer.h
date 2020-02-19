#pragma once

#include "Deck.h"

class Dealer
{
public:
	void revealHoleCard();
	void shuffle();
	Card* hit();

private:
	Deck* deck = new Deck();
};

