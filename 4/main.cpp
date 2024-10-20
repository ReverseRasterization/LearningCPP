// NOTE: SIGNED INTEGERS HAVE A SIGN INFRONT OF THE NUMBER, AN INT IS A 16-BIT SIGNED INTEGER BY DEFAULT:

#include <cstdint> // to control the width of integers
#include <iomanip> // for output manipulator
#include <iostream>


void print (int x)
{
	std::cout << x << '\n';
}

int main()
{
	/*
	int x{};
	unsigned int y{ 2 };

	std::int16_t i{5}; // signed 2 bytes

	double b {5.0}; 	// Floating point literal, doubles have better precision
	float c { 5.0f };	// Floating point literal, f suffix means float type
	
	std::cout << std::setprecision(17); // show 17 digits of precision
	std::cout << 3.3333333333333333333333333333333333333f << '\n';
	std::cout << 3.3333333333333333333333333333333333333 << '\n';

	std::cout << true << '\n';
	std::cout << false << '\n';
	std::cout << std::boolalpha; // prints bools as true or false, use std::noboolalpha to turn off
	std::cout << true << '\n';
	std::cout << false << '\n';

	bool bFalse { 0 }; // False
	bool bTrue { 1 }; // True
	std::cout << "x is " << sizeof(x) << " bytes\n";
	
	bool input_boolean {};
	std::cout << "Enter a boolean value: ";

	std::cin >> std::boolalpha; // this makes it case sensitive
	std::cin >> input_boolean;

	std::cout << std::boolalpha;
	std::cout << "You entered: " << input_boolean << '\n';
	

	int x { 1 };

	if (x > 0)
		std::cout << "X is greater than 0";
	else if (x < 0)
		std::cout << "x is less than 0";
	else
		std::cout << "The value is 0";
		
	char ch{};

	std::cin >> ch;
	std::cout << '\n' << "You input " << ch << '\n';
	
	std::cout << '\a';
	*/

	print(static_cast<int>(5.5)); // static_cast<new_type>(old_variable)
	
	std::cout << 5 << "..." << static_cast<unsigned int>(-5);

	return 0;
}
