#pragma once

#include "Hand.h"

class Player
{
private:
	Hand hand;
public:
	int getHandTotal();
	void addCardToHand();
	void splitHand();
	void requestHit();
	void requestStand();
	Player();
	~Player();
};

