#pragma once
#include "GameState.h"
#include "GameView.h"
class GameController
{

private: 
	GameView view;
	GameState state;
public:
	GameController(GameView view, GameState state);
	~GameController();
	void setBet(int bet);
	int getBet();
	void updateView();
	GameState getGameState() { return state; }
};

