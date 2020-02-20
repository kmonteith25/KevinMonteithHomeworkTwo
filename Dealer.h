#pragma once

#include "Deck.h"
#include "Hand.h"

class Dealer
{
public:
	void revealHoleCardPrint();
	void shuffle();
	void resetDeck();
	void dealSelf();
	void printHand();
	void clearHand();
	int getHandTotal();
	void runAI();
	Card* hit();
	bool isHandBust();
	Hand* hand;
	Dealer();
	~Dealer();

private:
	Deck* deck = new Deck();
};

