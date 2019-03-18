#include "pch.h"
#include "GameController.h"


GameController::GameController(GameView view, GameState state)
{
	this->view = view;
	this->state = state;
}


GameController::~GameController()
{
}

void GameController::setBet(int bet)
{
	state.setBet(bet);
}

int GameController::getBet()
{
	return state.getBet();
}

void GameController::updateView()
{
	view.displayBet(state.getBet());
}