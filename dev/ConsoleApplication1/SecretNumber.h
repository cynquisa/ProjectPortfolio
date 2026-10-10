#pragma once

enum class GuessResult
{
	TooHigh, 
	TooLow, 
	Correct
};

class Unlock
{

private:

	int num;

public:

	Unlock();
	~Unlock();

	void generate(int min = 1, int max = 100);

	int getValue() const;

	GuessResult evaluteGuess(int userGuess) const;
};