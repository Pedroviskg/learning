#include <iostream>
#include <string>
#include <cmath>


int numberLength(long long int n)
{
	if (n == 0)
	{
		return 1;
	}

	int digit = 0;
	while (n != 0) {
		n = n / 10;
		digit = digit + 1;
	}
	return digit;
}
int main()
{
	std::cout << "Input the credit card number: ";
	long long int cardNum {};
	std::cin >> cardNum;
	std::cout << numberLength(cardNum) << std::endl;

	std::string verifier{ std::to_string(cardNum) };
	
	// Verifing the card flag

	std::string cardFlag{};
	if (numberLength(cardNum) == 15 && (verifier[0] == '5') && (verifier[1] == '3'))
	{
		cardFlag = "Amex";
	}
	else if (((numberLength(cardNum) == 16) || (numberLength(cardNum) == 13)) && (verifier[0] == '4'))
	{
		cardFlag = "Visa";
	}
	else if ((numberLength(cardNum) == 16) && ((verifier[0] == '5') && (verifier[1] == '1') || (verifier[1] == '2') || (verifier[1] == '3') || (verifier[1] == '4')) || (verifier[1] == '5'))
	{
		cardFlag = "Mastercard";
	}
	else
	{
		std::cout << "Your flag could not be found. Please, verify the number and try again.";
			return 0;
	}
	
	
	// Sum of the digits


	 int sum1 {cardNum % 10};                                    // Counts starting for the last digit
	
	for (long long int i = 100; i < cardNum; i = i * 100)
	{
		int k{ (cardNum / i) % 10 };

		if (2*k > 10)
		{
			int g = 2 * ((2*k % 10) + (2*k / 10) & 10);
				sum1 = sum1 + g;
		}
		else
		{
			sum1 = sum1 + k;
		}
		
	}


	std::cout << sum1 << std::endl;

	int sum2{ (cardNum / 10) % 10 };                            // Counts starting for the last but one
	
	for (long long int j = 1000; j < cardNum; j = j * 100)
	{
		int k{ (cardNum / j) % 10 };

		if (2*k > 10)
		{
			int g = 2 * ((2*k % 10) + ((2*k / 10) & 10));
			sum2 = sum2 + g;
		}
		else
		{
			sum2 = sum2 + 2*k;
		}

	}
	std::cout << sum2 << std::endl;

	int valid{ ( sum1 + sum2) % 10 };
	
    // Validation and printing the result and flag

	if (valid == 0)
	{
		std::cout << "Your credit card is valid! It's flag is " << cardFlag;
	}
	else
	{
		std::cout << "Your credit card is not valid";
	}

	return 0;
}
