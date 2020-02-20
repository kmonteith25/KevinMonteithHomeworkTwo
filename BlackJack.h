#pragma once

#include "Player.h"
#include <algorithm>
#include "Dealer.h"

class BlackJack
{
public:
	void runGame();
	void checkWinner();
	void PlayerTurns();
	BlackJack();
	~BlackJack();
private:
	bool quitFlag = true;
	Dealer* dealer;
	Player* player;

};

