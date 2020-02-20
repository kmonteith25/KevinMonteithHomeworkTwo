#include "Deck.h"

//randomly shuffles vector based on seed based on time
void Deck::shuffle()
{
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::shuffle(std::begin(this->deck), std::end(this->deck), std::default_random_engine(seed));
}

//gets card from back of vector then removes it from the deck
Card* Deck::getNextCard()
{
	Card* tempBack = deck.back();
	deck.pop_back();
	return tempBack;
}

//prints out deck for debugging
void Deck::printDeck()
{
	for (int i = 0; i < deck.size(); i++) {
		std::cout << deck[i]->getSuit() << std::endl;
	}
}

Deck::Deck()
{
	resetDeck();
}

//clears out deck vector
void Deck::clearDeck() {
	deck.clear();
	
}

//clears deck then fills it back up with new cards
void Deck::resetDeck() {
	clearDeck();
	for (int i = 1; i <= 4; i++) {
		std::string suit = "unknown";
		switch (i) {
		case 1:
			suit = "Diamonds";
			break;
		case 2:
			suit = "Clubs";
			break;
		case 3:
			suit = "Hearts";
			break;
		case 4:
			suit = "Spades";
			break;
		}
		for (int j = 1; j <= 13; j++) {
			deck.push_back(new Card(suit, j));
		}
	}
}

Deck::~Deck()
{
}
