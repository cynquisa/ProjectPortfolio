#pragma once
#include <string>
#include <iostream>
class Player
{
private:
	std::string name;
	int numOfMatches;
	int matchesWon;
//	char symbol;
public:
	Player(const std::string& playerName)
		:name(playerName), numOfMatches(0), matchesWon(0) 
	{

	}

	std::string getName() const
	{
		return name;
	}

	int getMatchesPlayed() const
	{
		return numOfMatches;
	}
	int getMatchesWon() const
	{
		return matchesWon;
	}

	void recordResult()
	{

	}

	void displayHighScore()
	{

	}

	
};

/*I know that in the future I would like to give the player a choice as to somesort of symbol to represent themselves but for now we will only take the name and list a few game stats like number of games played and  won.*/