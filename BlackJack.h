#pragma once

#include "Player.h"
#include <algorithm>
#include "Dealer.h"

class BlackJack
{
public:
	void runGame();
	void checkWinner();
	BlackJack();
	~BlackJack();
private:
	Dealer* dealer;
	Player* player;

};

