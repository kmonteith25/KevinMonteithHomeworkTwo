#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Card.h"

class Hand
{
private:
	std::vector<Card*> hand;
public:
	bool isBust();
	void clearHand();
	std::vector<Card*> getCards();
	int getTotal();
	void addCard(Card* card);
};

