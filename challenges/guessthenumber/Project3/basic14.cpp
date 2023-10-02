#include <iostream>
#include <random>
#include <limits>
#include "randomht.h"

constexpr int maxGuess{ 7 };

int getNumber()
{
starthere:
	int number{};
	std::cin >> number;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		goto starthere;
	}
	if ((number > 100) || (number < 1))
	{
		std::cin.clear();
		std::cin.ignore();
		goto starthere;
	}

	return number;
}

bool playAgain(int guess, int rightNumber)
{

	if (guess == rightNumber)
	{
		std::cout << "\nYou won! ";
	}
	else
	{
		std::cout << "\nYou lost! ";
	}
	char yn{};
	do 
	{
		std::cout << "Want to play again (y/n)? ";

	std::cin >> yn;
	switch (yn)
	{
	case 'y':
		return true;
	case 'n':
		return false;
	default:
		continue;
	}
    
	} while ((yn != 'y') || (yn != 'n'));

		return true;
}

int main()
{

start:

	int rightNum(Random::get(1, 100));
	std::cerr << rightNum << "\n";
	int counter{ 1 };
	int foundSolution{};

	std::cout << "Try to guess the number.\n";

		for (int tries{ 1 }; tries <= maxGuess; tries++)
	{   
			std::cout << "\n Guess #" << counter << "\n";

		int guess{ getNumber() };

		if (guess == rightNum)
		{
			std::cout << "Good work!";
			foundSolution = guess;
			break;
		}
		else if (guess > rightNum)
		{
			std::cout << "It is bigger.";
		
		}
		else if (guess < rightNum)
		{
			std::cout << "It is less.";

		}
		counter++;
	}
		;

		if (playAgain(foundSolution, rightNum) == 1)
			goto start;
		else
			std::cout << "Thank you for playing!";



	return 0;

}
