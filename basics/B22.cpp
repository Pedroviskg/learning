#include <iostream>
#include <string>

class Ball
{
private:

    double m_radius{ 10.0 };
	std::string m_color{ "black" };
	

public:

	Ball(double s = 10.0, std::string k = "black")                        // The main constructor. Runs everything.
		:m_radius{s}, m_color{k}
	{
		std::cout << s << " and " << k << ".\n";
	}

	Ball(std::string k)                                                   // The delegated constructor. If the object doesn't have a number, then use this to define the string and the  default number.
		:Ball(10.0, k)
	{
	}
};


int main()
{
	
	
		Ball def{};                                                        // No number and no name. Call de main constructor and use default.
		Ball blue{ "blue" };                                               // No number, but uses name. Call the delegator.
		Ball twenty{ 20.0 };                                               // Number, but no name. Call the main constructor and use default for color.
		Ball blueTwenty{ 20.0, "blue"};                                    // Number and name. Call the main constructor and defines both variables.

		return 0;
	
}
