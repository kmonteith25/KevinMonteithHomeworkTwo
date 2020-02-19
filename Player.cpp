#include "Player.h"

int Player::getHandTotal()
{
	return hand.getTotal();
}

void Player::addCardToHand(Card* card)
{
	this->hand.addCard(card);
}

void Player::splitHand()
{
}

void Player::requestHit(Dealer* dealer)
{
	this->addCardToHand(dealer->hit());
	std::cout << this->hand.getTotal() << "POP" << std::endl;
}
void Player::requestStand()
{
}

Player::Player()
{
	
}

Player::~Player()
{
}
