#include "Dealer.h"


void Dealer::revealHoleCardPrint()
{
	hand->printHand();
}

void Dealer::shuffle()
{
	deck->shuffle();
}

void Dealer::resetDeck()
{
	
}

void Dealer::dealSelf()
{
	hand->addCard(deck->getNextCard());
	hand->addCard(deck->getNextCard());
}

void Dealer::printHand()
{
	hand->printHandNotFirstCard();
}

void Dealer::clearHand()
{
	this->hand->clearHand();
}

int Dealer::getHandTotal()
{
	return hand->getTotal();
}

void Dealer::runAI()
{
	while (hand->getTotal() < 17) {
		hand->addCard(hit());
	}
}

Card* Dealer::hit()
{
	return deck->getNextCard();
}

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

