#include "Hand.h"

//checks if hand value is greater than 21
bool Hand::isBust()
{
	if (this->getTotal() > 21) {
		return true;
	}
	else {
		return false;
	}
}

//clears out hand vector
void Hand::clearHand()
{
	hand.clear();
}

//returns card vector
std::vector<Card*> Hand::getCards()
{
	return std::vector<Card*>();
}

//gets hand total, if over and has ace we will deduct 10 and treat ace as one
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

//adds card to vector
void Hand::addCard(Card* card)
{
	hand.push_back(card);
}

//prints full hand
void Hand::printHand()
{
	for (int i = 0; i < hand.size(); i++) {
		std::cout << hand[i]->getRank() << " of " << hand[i]->getSuit() << std::endl;
	}
	std::cout << "\n" << std::endl;
}

//prints out all cards except the first one, for dealer class
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
