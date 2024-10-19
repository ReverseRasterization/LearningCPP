/*	NOTES:
 *	NESTED FUNCTIONS ARE NOT ALLOWED (function inside of a function)
 *	YOU CANNOT CALL MAIN, AND LEAVE IT AT THE BOTTOM
 */

#include <iostream>
#include <cstdlib> // allows us to use EXIT_SUCCESS and EXIT_FAILURE

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
	return EXIT_SUCCESS;
}

int doubleNumber(int x)
{
	return x * 2;
}




