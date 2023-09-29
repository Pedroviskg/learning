#include <iostream>
#include <string>
#include <cmath>
#include "functions.h"




int main()
{
	std::cout << "Input the credit card number: ";
	long long int cardNum {};
	std::cin >> cardNum;
	std::cout << numberLength(cardNum) << std::endl;
	
	
	// Sum of the digits. Starts from the last digit.


	 int sum1 {(cardNum % 10)};                                    // Counts starting for the last digit
	
	for (long long int i = 100; i < cardNum; i = i * 100)          
	{
		int digitSum1{ (cardNum / i) % 10 };                  // No need to verify the double of number
		sum1 = sum1 + digitSum1; 
		
	}

        // Defines the first digit of the last but one number. If it's bigger than 9, then the number has two digits (in the integers set).
	
	int sum2{};
	int isItBig{(((cardNum / 10) % 10)) };
	if (2*isItBig >= 10)
	{
		int doubleiTB = 2 * isItBig;
		int firstDigit = doubleiTB % 10;
		int secondDigit = (doubleiTB / 10) % 10;
		int g = (firstDigit + secondDigit);
		sum2 = g;
	}
	else
	{
		sum2 = 2*isItBig;
	}
                           
        // Sum of the last but one digit.
	
	for (long long int j = 1000; j < cardNum; j = j * 100)
	{
		int digitSum2{ (cardNum / j) % 10 };
		int doubleK = 2 * digitSum2;
		int firstDigit = doubleK % 10;
		int secDigit = (doubleK / 10) % 10; // f = doubleK
		int g = (firstDigit + secDigit);

		if (doubleK >= 10)
		{
			sum2 = sum2 + g;
		}
		else
		{
			sum2 = sum2 + doubleK;
		}

	}
	std::cout << sum2 << std::endl;
	std::cout << sum1 << std::endl;

	int valid{ ( sum1 + sum2) % 10 };
	
        // Validation and printing the result and flag

	if (valid == 0)
	{
		std::cout << "Your credit card is valid! It's flag is " << getFlag(cardNum, numberLength(cardNum));
	}
	else
	{
		std::cout << "Your credit card is not valid";
	}

	return 0;
}
