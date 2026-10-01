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
		std::cout << "Select the you wish to play? " << std::endl;
		break;

	case MenuChoice::HighScoreTable:
		std::cout << "Loading the High Score Table..." << std::endl;
		break;

	case MenuChoice::End:
		std::cout << "GAMEOVER " << std::endl;

	}
}


/*I am getting the hang of this. I can see my menu comming together. I am not sure where to go next but I will keep researching.*/