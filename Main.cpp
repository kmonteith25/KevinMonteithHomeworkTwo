#include <iostream>
#include "BlackJack.h"


int main() {
    //Dealer* dealer = new Dealer();
    //Player* player = new Player();

    //player->requestHit(dealer);
    BlackJack* game = new BlackJack();
    game->runGame();
    return 0;
}