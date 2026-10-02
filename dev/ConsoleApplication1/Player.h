#pragma once
#include <string>
#include <iostream>

class Player
{
private:
	std::string name;
	int numOfMatches;
	int matchesWon;
	int symbol;
public:


	Player(const std::string& playerName, int symbol);
	~Player();

	std::string getName() const;

	int getMatchesPlayed() const;

	int getMatchesWon() const;

	int getSymbol() const;

	void recordResult(bool won);
	void displayHighScore();

};
