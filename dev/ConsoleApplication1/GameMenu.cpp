#include <iostream>
#include "GameMenu.h"
#include <string>

void menuChoice(MenuChoice choice)
{
	switch (choice)
	{
	case MenuChoice::Player:
		std::cout << "Choose your character ? " << std::endl;
		break;

	case MenuChoice::Level:
		std::cout << "Select the level you wish to play? " << std::endl;
		std::cout << "1. Easy Guess a number between 1 - 100 out of 15 chances.\n";
		std::cout << "2. Hard Guess a number between 1 - 150 out of 12 chances.\n";
		break;

/*	case MenuChoice::HighScoreTable:
		std::cout << "Loading the High Scores..." << std::endl;
	
		break;
*/
	case MenuChoice::End:
		std::cout << "GAMEOVER " << std::endl;

	}
}


/*I am getting the hang of this. I can see my menu comming together. I am not sure where to go next but I will keep researching.


	int input = 0;
	std::cout << "1. player\n2. Select Level\n3. High Scores\n4. Exit\n";
	std::cout << "Enter your choice: ";
	std::cin >> input;

	MenuChoice choice = static_cast<MenuChoice>(input);
	menuChoice;
	return 0;
	this how I couud test the menu in the main.*/





*/