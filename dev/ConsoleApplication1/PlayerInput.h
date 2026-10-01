#pragma once
#include <string>
#include <iostream>
#include <limits>

class PlayerInput
{
public:
	static int isValidInt(const std::string& message, int min, int max)
	{	
		int userInput;
		while (true)
		{
			std::cout << message;
			if (std::cin >> userInput)
			{
				if (userInput >= min && userInput <= max)
				{
					return userInput;
				}
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Please enter a number between " << min << " and " << max << ".\n";
		}
	}
};

/*UserInput is a function that will handle make sure my program will not crash if someone enters invalid data such a letter vs a number.
I will be including limit library to help make sure the numbers that will be entered will be between my min and max numbers allowed.*/