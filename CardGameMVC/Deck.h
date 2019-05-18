#pragma once
#include "Card.h";
#include <iostream>

const int DECK_SIZE = 52;

class Deck
{
private: Card cards[DECK_SIZE];

public:
	Deck();
	~Deck();
	//draw(); //removes from star of cards array and returns card
	//shuffle();
	void printDeck();
};

