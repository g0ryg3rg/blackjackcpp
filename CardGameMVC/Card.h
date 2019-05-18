#pragma once
#include <string>

class Card
{
public: enum Suit { HEARTS, SPADES, DIAMONDS, CLUBS };

private:
	int value;
	Suit suit;
	
public:
	Card();
	Card(int value, Suit suit);
	~Card();
	int getValue() { return value; }
	char getSuit() { return suit; }
	void setValue(int value) { this->value = value; }
	void setSuit(Suit suit) { this->suit = suit; }
	std::string getSuitAsString();
	std::string getValueAsString();

};

