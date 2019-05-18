#include "pch.h"
#include "Deck.h"


Deck::Deck()
{
	//Hearts
	for (size_t i = 0; i < 1*(DECK_SIZE/4); i++)
	{
		cards[i].setSuit(Card::HEARTS);
		cards[i].setValue(i + 1);
		
	}

	//Diamonds
	for (size_t i = 1* (DECK_SIZE / 4); i < 2 * (DECK_SIZE / 4); i++)
	{
		cards[i].setSuit(Card::DIAMONDS);
		cards[i].setValue(i - 1*(DECK_SIZE / 4) + 1);

	}

	//Spades
	for (size_t i = 2 * (DECK_SIZE / 4); i < 3 * (DECK_SIZE / 4); i++)
	{
		cards[i].setSuit(Card::SPADES);
		cards[i].setValue(i - 2 * (DECK_SIZE / 4) + 1);

	}

	//Clubs
	for (size_t i = 3 * (DECK_SIZE / 4); i < 4 * (DECK_SIZE / 4); i++)
	{
		cards[i].setSuit(Card::CLUBS);
		cards[i].setValue(i - 3 * (DECK_SIZE / 4) + 1);

	}
}


Deck::~Deck()
{
}

void Deck::printDeck() {

	for (size_t i = 0; i < DECK_SIZE; i++)
	{
		std::cout << "Card # " << i + 1 << " = "<< cards[i].getValueAsString() << " of " << cards[i].getSuitAsString() << std::endl;
	}
}
