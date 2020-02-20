#include "Card.h"

//getters
std::string Card::getSuit()
{
	return this->suit;
}

std::string Card::getRank()
{

	return this->rank;
}

int Card::getValue() {
	return this->value;
}

//constructor
Card::Card(std::string suit, int rank)
{
	this->suit = suit;
	//assigns rank and value
	switch (rank) {
		case 11:
			this->rank = "Jack";
			this->value = 10;
			break;
		case 12:
			this->rank = "Queen";
			this->value = 10;
			break;
		case 13:
			this->rank = "King";
			this->value = 10;
			break;
		case 1:
			this->rank = "Ace";
			this->value = 11;
			break;
		default:
			this->value = rank;
			this->rank = std::to_string(rank);
	}
}

Card::~Card()
{
}
