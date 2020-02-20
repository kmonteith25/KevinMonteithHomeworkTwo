#include <iostream>
#include "BlackJack.h"


int main() {
    //Game class
    BlackJack* game = new BlackJack();

    //Start Game
    game->runGame();
    return 0;
}