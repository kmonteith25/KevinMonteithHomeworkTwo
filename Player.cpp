#include "Player.h"

//returns current hand total
int Player::getHandTotal()
{
	return hand->getTotal();
}

//adds card to hadn
void Player::addCardToHand(Card* card)
{
	this->hand->addCard(card);
}

//clears hand of all cards
void Player::clearHand()
{
	this->hand->clearHand();
}

//request hit from dealer
void Player::requestHit(Dealer* dealer)
{
	this->addCardToHand(dealer->hit());
}

//request the dealer to deal initial cards
void Player::requestDeal(Dealer* dealer)
{
	this->addCardToHand(dealer->hit());
	this->addCardToHand(dealer->hit());
}

//print hand
void Player::printHand()
{
	hand->printHand();
}

void Player::requestStand()
{
}
//checks is player has busted
bool Player::isHandBust()
{
	return hand->isBust();
}

Player::Player()
{
	hand = new Hand();
}

Player::~Player()
{
}
