#include "Dealer.h"

//reveals all cards dealer has
void Dealer::revealHoleCardPrint()
{
	hand->printHand();
}
//shuffle deck
void Dealer::shuffle()
{
	deck->shuffle();
}

//reset cards in deck
void Dealer::resetDeck()
{
	deck->resetDeck();
}

//deal cards to dealer
void Dealer::dealSelf()
{
	hand->addCard(deck->getNextCard());
	hand->addCard(deck->getNextCard());
}

//prints hand but hole card is hidden
void Dealer::printHand()
{
	hand->printHandNotFirstCard();
}

//clears out hand
void Dealer::clearHand()
{
	this->hand->clearHand();
}

//gets the value of the hand
int Dealer::getHandTotal()
{
	return hand->getTotal();
}

//dealer runs their turn
void Dealer::runAI()
{
	while (hand->getTotal() < 17) {
		hand->addCard(hit());
	}
}

//gets deck from card and returns
Card* Dealer::hit()
{
	return deck->getNextCard();
}

//checks if dealer has busted
bool Dealer::isHandBust()
{
	return hand->isBust();
}

Dealer::Dealer()
{
	this->hand = new Hand();
}

Dealer::~Dealer()
{
}

