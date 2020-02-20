#include "Player.h"

int Player::getHandTotal()
{
	return hand->getTotal();
}

void Player::addCardToHand(Card* card)
{
	this->hand->addCard(card);
}

void Player::clearHand()
{
	this->hand->clearHand();
}

void Player::splitHand()
{
}

void Player::requestHit(Dealer* dealer)
{
	this->addCardToHand(dealer->hit());
}

void Player::requestDeal(Dealer* dealer)
{
	this->addCardToHand(dealer->hit());
	this->addCardToHand(dealer->hit());
}
void Player::printHand()
{
	hand->printHand();
}

void Player::requestStand()
{
}

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
