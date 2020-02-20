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
		if (hand[i]->getValue() == 11) {
			aceNum++;
			handTotal += 11;
		}
		else {
			handTotal += hand[i]->getValue();
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

void Hand::printHand()
{
	for (int i = 0; i < hand.size(); i++) {
		std::cout << hand[i]->getRank() << " of " << hand[i]->getSuit() << std::endl;
	}
	std::cout << "\n" << std::endl;
}

void Hand::printHandNotFirstCard()
{
	std::cout << "Hole Card" << std::endl;
	for (int i = 1; i < hand.size(); i++) {
		std::cout << hand[i]->getRank() << " of " << hand[i]->getSuit() << std::endl;
	}
	std::cout << "\n" << std::endl;

}
Hand::Hand()
{
}

Hand::~Hand()
{
}
