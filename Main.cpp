#include <iostream>
#include "Player.h"
#include "Dealer.h"


int main() {
    Dealer* dealer = new Dealer();
    Player* player = new Player();

    player->requestHit(dealer);
    return 0;
}