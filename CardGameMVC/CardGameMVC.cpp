// CardGameMVC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "GameController.h"

int main()
{
    std::cout << "Begin CardGameMVC" << std::endl;

	GameState state;
	GameView view;
	GameController controller = GameController(view, state);



	controller.setBet(100);
	controller.updateView();

	controller.setBet(125);
	controller.updateView();

	controller.getGameState().getDeck().printDeck();

	std::cout << "End CardGameMVC" << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu