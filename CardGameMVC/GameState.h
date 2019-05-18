#pragma once
#include "Deck.h";

class GameState
{
private:
	int bet;//arbitrary data to test MVC
	//Player players[]
	//Dealer dealer
	Deck deck;//move to dealer
public:
	GameState();
	~GameState();
	void setBet(int bet) { this->bet = bet; }
	int getBet() { return bet; }
	Deck getDeck() { return deck; }
};

