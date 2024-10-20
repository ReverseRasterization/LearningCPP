#include <iostream>

int main()
{
	const double gravity { 9.8 }; // preferred use of the const syntax
	int const sidesInSquare { 4 };

	int age { 5 };
	const int ageAtDeath { age }; // consts can be initialized from non-consts
	
	std::cout << 5L << '\n'; // 5L is type long
	std::cout << 5u << '\n'; // 5u is type unsigned int
	
	//float f { 4.1 }; // causes an error because the compiler defaults to a double
	
	double protonCharge = { 1.6e-19 }; // scientific notation! (yippie!!!) 
	
	return 0;
}
