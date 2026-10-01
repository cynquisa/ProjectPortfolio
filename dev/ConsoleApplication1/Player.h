#pragma once
#include <string>
#include <iostream>

class Player
{
private:
	std::string name;
	int numOfMatches;
	int matchesWon;
public:

	Player(const std::string& playerName);

	std::string getName() const;

	int getMatchesPlayed() const;

	int getMatchesWon() const;


	void recordResult(bool won);
	void displayHighScore();

};
