#pragma once
#include <iostream>
#include <string>
class Card
{
private:
	std::string suit;
	std::string rank;
	int value;
public:
	std::string getSuit();
	std::string getRank();
	int getValue();
	Card(std::string suit, int rank);
	~Card();
};

