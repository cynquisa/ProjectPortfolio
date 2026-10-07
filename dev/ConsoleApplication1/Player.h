#pragma once
#include <string>
#include <iostream>

class Player
{
private:
	std::string name;
	int numOfMatches;
	int matchesWon;
	std::string CharacterSymbol;
public:

	Player(std::string name, int numOfMatches, int matchesWon, std::string CharacterSymbol);

	~Player();

	std::string getName() const;

	int getMatchesPlayed() const;

	int getMatchesWon() const;

	std::string getCharacterSymbol() const;

	void recordResult(bool won);
	void displayHighScore();

};
