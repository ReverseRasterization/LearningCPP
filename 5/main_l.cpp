#include <iostream>

int five()
{
	return 5;
}

int getValue()
{
	std::cout << "Enter a number: ";
       	
	int x {};

	std::cin >> x;

	return x;
}

int main()
{
	/*
	const double gravity { 9.8 }; // preferred use of the const syntax // constants may also help the compiler optimize code
	int const sidesInSquare { 4 };

	int age { 5 };
	const int ageAtDeath { age }; // consts can be initialized from non-consts
	
	//std::cout << 5L << '\n'; // 5L is type long
	//std::cout << 5u << '\n'; // 5u is type unsigned int
	
	//float f { 4.1 }; // causes an error because the compiler defaults to a double
	
	double protonCharge = { 1.6e-19 }; // scientific notation! (yippie!!!)
	
       // Constants

	sizeof(int) + 1; // constant expression (sizeof can be determined at compile time)_	
	
	// the compiler is only required to evaluate constant expressions at compile-time in contexts that require a constant expression. It may or may not do so in other cases
	// const variables are those that have an integral type and constant expression intializer
	*/

	// constexpr (Constant Expression Keyword) more strict than 'const' MUST BE KNOWN AT COMPILE TIME
	// any constant variable whose initializer is not a constant expression (making it known as a runtime constant) should be declared as const.
	// These are all okay and are completely valid
	constexpr double gravity { 9.8 };
	constexpr int sum { 4+5 };
	constexpr int something { sum };
	constexpr double d { 1.2 }; // const expressions work with non-integral values even though the const constructor doesn't  

	// These are not okay
	/*
	int age{};
	std::cout << "Please enter your age:";
	std::cin >> age;
	constexpr int myAge {age};
	constexpr int f { five() };
	*/
	
	// conditional operators
	/*
	int x { getValue() };
    int y { getValue() };
	int max { ( x>y ) ? x : y}; // True : False

	std::cout << "The max number between " << x << " and " << y << " is " << max << ".\n";
	*/

	constexpr bool inBigClassroom { false };
	constexpr int classSize { inBigClassroom ? 30 : 20}; // this outputs 20

	std::cout << "The class size is: " << classSize;

	std::cout << ( (5 < 6) ? "5 is less than 6" : "6 is less than 5"); // prints out "5 is less than 6"

	/*
	constexpr int x{ 5 };
    std::cout << ((x != 5) ? x : "x is 5"); // compile error: compiler can't find common type for constexpr int and C-style string literal
	*/

	return 0;
}
