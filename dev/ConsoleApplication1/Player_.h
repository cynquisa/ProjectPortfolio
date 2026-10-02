#pragma once
#include <string>
#include <iostream>

class Player
{
private:
	std::string name;
	int numOfMatches;
	int matchesWon;
	std::string symbol;
public:

	Player(std::string name, int numOfMatches, int matchesWon, std::string symbol);

	~Player();

	std::string getName() const;

	int getMatchesPlayed() const;

	int getMatchesWon() const;

	std::string getSymbol() const;

	void recordResult(bool won);
	void displayHighScore();

};
