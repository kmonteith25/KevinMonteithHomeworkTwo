#include "BlackJack.h"
using namespace std;

void BlackJack::runGame()
{
	string userResponse;
	cout << "Shuffling Cards...." << endl;
	dealer->shuffle();
	cout << "Dealing Cards...." << endl;
	player->requestDeal(dealer);
	cout << "Your Cards:" << endl;
	player->printHand();
	while (!player->isHandBust()) {
		cout << "Would you like to Hit(H) or Stand(S)?" << endl;
		cin >> userResponse;
		if (userResponse == "H") {
			player->requestHit(dealer);
		}
		else if (userResponse == "S") {
			break;
		}
		else {
			cout << "Please input either H or S" << endl;
		}
		player->printHand();
	}
}

BlackJack::BlackJack()
{
	dealer = new Dealer();
	player = new Player();
}

BlackJack::~BlackJack()
{
}
