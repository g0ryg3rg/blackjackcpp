#include "pch.h"
#include "Card.h"


Card::Card()
{
}

Card::Card(int value, Suit suit)
{
	this->value = value;
	this->suit = suit;
}

Card::~Card()
{
}

std::string Card::getSuitAsString() {
	if (this->suit == HEARTS)
		return "Hearts";
	else 	if (this->suit == DIAMONDS)
		return "Diamonds";
	else 	if (this->suit == SPADES)
		return "Spades";
	else
		return "Clubs";
}

std::string Card::getValueAsString() {
	if (value == 1)
		return "Ace";
	else if (value == 11)
		return "Jack";
	else if (value == 12)
		return "Queen";
	else if (value == 13)
		return "King";
	else
		return std::to_string(value);
}