#include "BlackJack.h"
using namespace std;

//Game loop
void BlackJack::runGame()
{
	//Loops till user signals that they dont want to play
	while(1) {
		//reset all decks and hands
		player->clearHand();
		dealer->clearHand();
		dealer->resetDeck();

		//Shuffle and deal cards
		cout << "Shuffling Cards.... \n" << endl;
		dealer->shuffle();
		cout << "Dealing Cards....  \n" << endl;
		player->requestDeal(dealer);
		dealer->dealSelf();
		cout << "Your Cards:" << endl;
		player->printHand();
		cout << "Dealer Cards:" << endl;
		dealer->printHand();

		//store userResponse and loop till bust or stand
		string userResponse;
		while (!player->isHandBust()) {
			cout << "Would you like to Hit(H) or Stand(S)?" << endl;
			cin >> userResponse;
			std::transform(userResponse.begin(), userResponse.end(), userResponse.begin(), ::toupper);
			if (userResponse == "H") {
				player->requestHit(dealer);
			}
			else if (userResponse == "S") {
				break;
			}
			else {
				cout << "Please input either H or S \n" << endl;
			}
			cout << "\nYour Cards:" << endl;
			player->printHand();
		}

		//dealer runs his turn
		dealer->runAI();

		//reveal dealer's cards
		cout << "\nDealer Cards:" << endl;
		dealer->revealHoleCardPrint();

		//check who was the winner
		checkWinner();

		//Ask if the user would like to continue
		cout << "Would you like to continue playing? (Y/N)" << endl;
		cin >> userResponse;
		std::transform(userResponse.begin(), userResponse.end(), userResponse.begin(), ::toupper);
		if (userResponse == "N") {
			break;
		}

	}

}

void BlackJack::checkWinner() {
	//logic to check who win/loses/ties
	if (player->isHandBust() && dealer->isHandBust()) {
		cout << "Both Dealer and Player busted, no winner" << endl;
	}
	else if (player->isHandBust()) {
		cout << "You busted, you lose!" << endl;
	}
	else if (dealer->isHandBust()) {
		cout << "Dealer busted, you win!" << endl;
	}
	else if (player->getHandTotal() > dealer->getHandTotal()) {
		cout << "You got " << player->getHandTotal() << "\n Dealer got " << dealer->getHandTotal() << "\n You win!" << endl;
	}
	else if (player->getHandTotal() < dealer->getHandTotal()) {
		cout << "You got " << player->getHandTotal() << "\n Dealer got " << dealer->getHandTotal() << "\n You lose!" << endl;
	}
	else if (player->getHandTotal() == dealer->getHandTotal()) {
		cout << "You got " << player->getHandTotal() << "\n Dealer got " << dealer->getHandTotal() << "\n You Tie!" << endl;
	}
	else {
		cout << "Something went wrong";
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
