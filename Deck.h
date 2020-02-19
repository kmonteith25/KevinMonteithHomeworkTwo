#pragma once
#include <iostream>
#include <vector>
#include "Card.h"
#include <string> 
#include <random>
#include <algorithm>
#include <chrono>

class Deck
{
private:
	std::vector<Card*> deck;
public:
	void shuffle();
	Card* getNextCard();
	void printDeck();
	Deck();
	~Deck();
};

