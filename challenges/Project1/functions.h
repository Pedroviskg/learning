#ifndef FUNCTIONS_H
#define FUNCTIONS_H


inline int numberLength(long long int n)
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
std::string getFlag(long long int cardNum, long long int k)
{
	std::string verifier{ std::to_string(cardNum) };
	std::string cardFlag{};
	if ((k == 15) && (verifier[0] == '5') && (verifier[1] == '3'))
	{
		cardFlag = "Amex";
	}
	else if ((k == 16) && (verifier[0] == '4'))
	{
		cardFlag = "Visa";
	}
	else if ((k == 16) && ((verifier[0] == '5') && (verifier[1] == '1') || (verifier[1] == '2') || (verifier[1] == '3') || (verifier[1] == '4')) || (verifier[1] == '5'))
	{
		cardFlag = "Mastercard";
	}
	else
	{
		std::cout << "Your flag could not be found. Please, verify the number and try again.";
		return 0;
	}
	return cardFlag;
}
#endif

