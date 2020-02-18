#pragma once
#include <iostream>
class Card
{
private:
	std::string suit;
	std::string rank;
public:
	std::string getSuit();
	std::string getRank();
	Card(std::string suit, std::string rank);
	~Card();
};

