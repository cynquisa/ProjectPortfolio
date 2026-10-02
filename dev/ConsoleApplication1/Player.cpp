#include "Player.h"
#include <iostream>
#include <string>

Player::Player(const std::string& playerName, int symbol)
{
}

Player::~Player()
{

}

std::string Player::getName() const
{
	return  name;
}

int Player::getMatchesPlayed() const
{
	return numOfMatches;
}

int Player::getMatchesWon() const
{
	return matchesWon;
}

int Player::getSymbol() const
{
	return symbol;
}


void Player::recordResult(bool won)
{
	numOfMatches++;
	if (won)
	{
		matchesWon++;
	}
}

void Player::displayHighScore()
{
	std::cout << "Player Stats: " << name << '\n';

	std::cout << "Games Played: " << numOfMatches << '\n';

	std::cout << "Safes Crackrd: " << matchesWon << '\n';
}









/*I know that in the future I would like to give the player a choice as to somesort of symbol to 
represent themselves but for now we will only take the name and list a few game stats like number of games played and  won.*/


