#include "SecretNumber.h"
#include <cstdlib>
#include <ctime>

Unlock::Unlock() : num(0)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}
Unlock::~Unlock()
{

}
void Unlock::generate(int min,int max)
{
	num = (std::rand() % (max - min + 1)) + min;
}
int Unlock::getValue() const
{
	return num;
}
GuessResult Unlock::evaluteGuess(int userGuess) const
{
	if (userGuess > num) return GuessResult::TooHigh;
	if (userGuess < num) return GuessResult::TooLow;
	return GuessResult::Correct;
}