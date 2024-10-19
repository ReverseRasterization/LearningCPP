/*	NOTES:
 *	NESTED FUNCTIONS ARE NOT ALLOWED (function inside of a function)
 *	YOU CANNOT CALL MAIN, AND LEAVE IT AT THE BOTTOM
 */

#include <iostream>
#include <cstdlib> // allows us to use EXIT_SUCCESS and EXIT_FAILURE

#define PRINT_JOE
#define FOO 9

int doubleNumber(int x); // this is a forward reference, without this, main would error because the program is compiled sequentially

void doPrint()
{
	std::cout << "In doPrint()\n";
}

int returnFive()
{
	return 5;
}


int main()
{
	//std::cout << "Starting main()\n";
	//doPrint();
	//std::cout << "Ending main()\n";
	std::cout << doubleNumber(returnFive()) << '\n';

	#ifdef PRINT_JOE
		std::cout << "Joe\n";
	#endif

	#ifdef PRINT_BOB
		std::cout << "Bob\n";
	#endif

	#if 0 // Nothing will compile here unless the 0 is changed to a 1
		std::cout << "Hello, world!";
	#endif

	#ifdef FOO // FOO doesn't get replaced with 9
		std::cout << FOO << '\n'; // FOO is now 9 but only for this statement
	#endif

	return EXIT_SUCCESS;
}

int doubleNumber(int x)
{
	return x * 2;
}




