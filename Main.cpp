#include <iostream>
#include "Deck.h"

int main() {
    Deck* d = new Deck();
    d->shuffle();
    d->getNextCard();
    return 0;
}