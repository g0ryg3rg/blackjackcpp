#pragma once
class GameState
{
private:
	int bet;//arbitrary data to test MVC
public:
	GameState();
	~GameState();
	void setBet(int bet) { this->bet = bet; }
	int getBet() { return bet; }
};

