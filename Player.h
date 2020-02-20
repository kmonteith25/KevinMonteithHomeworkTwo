#pragma once

#include "Hand.h"
#include "Dealer.h"

class Player
{
private:
	Hand* hand;
public:
	int getHandTotal();
	void addCardToHand(Card* card);
	void clearHand();
	void splitHand();
	void requestHit(Dealer* dealer);
	void requestDeal(Dealer* dealer);
	void printHand();
	void requestStand();
	bool isHandBust();
	Player();
	~Player();
};

