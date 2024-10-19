#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	
	int x {};
	std::cin >> x;

	std::cout << "Double that integer is: " << x*2 << '\n';

	return 0;

}
