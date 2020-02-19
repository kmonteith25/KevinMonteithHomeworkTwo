#pragma once

#include "Player.h"
#include "Dealer.h"

class BlackJack
{
public:
	void runGame();
	BlackJack();
	~BlackJack();
private:
	bool quitFlag = true;
	Dealer* dealer;
	Player* player;

};

