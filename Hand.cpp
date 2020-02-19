#include "Hand.h"

bool Hand::isBust()
{
	if (this->getTotal() > 21) {
		return true;
	}
	else {
		return false;
	}
}

void Hand::clearHand()
{
	hand.clear();
}

std::vector<Card*> Hand::getCards()
{
	return std::vector<Card*>();
}

int Hand::getTotal()
{
	int aceNum = 0;
	int handTotal = 0;
	for (int i = 0; i < hand.size(); i++) {
		if (hand[i]->getRank() == "1") {
			aceNum++;
			handTotal += 11;
		}
		else {
			handTotal += std::stoi(hand[i]->getRank());
		}
		
	}
	if (handTotal > 21 && aceNum > 0) {
		for (int i = 0; i < aceNum; i++) {
			if (handTotal > 21) {
				handTotal = handTotal - 10;
			}
			else {
				break;
			}
		}
	}
	return handTotal;
}

void Hand::addCard(Card* card)
{
	hand.push_back(card);
}

Hand::Hand()
{
}

Hand::~Hand()
{
}
