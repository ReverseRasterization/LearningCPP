#include <iostream>
#include "Alex.h"
#include "add.h" // use double quotes for files you've written

//int add(int x, int y); // needed so main.cpp knows that add() is a function defined elsewhere * depreciated in favor of the header file *

int main()
{
	std::cout << "The sum of 3 and 4 is: " << add(3,4) << '\n'; 
	std::cout << "My name is: " << MY_NAME << '\n'; 
	return 0;
}
