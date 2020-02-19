#include <iostream>
#include "Deck.h"
#include "Hand.h"
#include "Card.h"

int main() {
    Deck* d = new Deck();
    d->shuffle();
    d->getNextCard();
    Hand* hand = new Hand();
    hand->addCard(new Card("P", "1"));
    hand->addCard(new Card("P", "1"));
    hand->addCard(new Card("P", "10"));
    hand->addCard(new Card("P", "1"));
    std::cout << hand->isBust() << std::endl;
    return 0;
}