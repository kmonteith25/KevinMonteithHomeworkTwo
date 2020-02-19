#include "Card.h"

std::string Card::getSuit()
{
	return this->suit;
}

std::string Card::getRank()
{
	return this->rank;
}

Card::Card(std::string suit, std::string rank)
{
	this->suit = suit;
	this->rank = rank;
}

Card::~Card()
{
}
