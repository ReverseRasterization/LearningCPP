#include <iostream>

#define DEBUG

double getDouble()
{
	double x {};
	
	std::cout << "Enter a double value: ";
	std::cin >> x;

	return x;
}

char getOperator()
{
	char x {};

	std::cout << "Enter +, -, *, or /: ";
	std::cin >> x;

	return x;
}

void performOperation(double num1, double num2, char operation)
{
	if (operation == '+')
		std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 + num2 << '\n';
	else if (operation == '-')
		std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 - num2 << '\n';
	else if (operation == '*')
		std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 * num2 << '\n';
	else if (operation == '/')
		std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 / num2 << '\n';
}

int main()
{	
	double num1 {getDouble()}, num2 {getDouble()};
	char operation {getOperator()};
	
	performOperation(num1, num2, operation);

	return 0;	
}
