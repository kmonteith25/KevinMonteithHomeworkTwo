#pragma once

#include "Hand.h"
#include "Dealer.h"
class Player
{
private:
	Hand hand;
public:
	int getHandTotal();
	void addCardToHand(Card* card);
	void splitHand();
	void requestHit(Dealer* dealer);
	void requestStand();
	Player();
	~Player();
};

