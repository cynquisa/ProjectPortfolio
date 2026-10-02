#include "Player.h"
#include <iostream>
#include <string>
#include <vector>




Player::Player(std::string name, int numOfMatches, int matchesWon, std::string CharacterSymbol)
	: name(name), numOfMatches(numOfMatches), matchesWon(matchesWon), CharacterSymbol(CharacterSymbol)
{
	std::vector<std::string> characterChoice;

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

std::string Player::getCharacterSymbol() const
{
	return CharacterSymbol;
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
	std::cout << "\n========================================================== = \n";
	std::cout << "Player Stats: " << name << "Avatar: " << CharacterSymbol << '\n';
	std::cout << "\n========================================================== = \n";

	std::cout << "Games Played: " << numOfMatches << '\n';

	std::cout << "Safes Crackrd: " << matchesWon << '\n';
}









/*I know that in the future I would like to give the player a choice as to somesort of symbol to 
represent themselves but for now we will only take the name and list a few game stats like number of games played and  won.*/


