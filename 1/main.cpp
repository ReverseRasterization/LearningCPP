#include <iostream>

int main()
{
	[[maybe_unused]] int x; // definition; defne a variables named x, of type int
	[[maybe_unused]] int a,b;

	int width;
	width = 5;

	//std::cout << width; // should print 5
	
	width = 7;

	//std::cout << width; // should print 7

	[[maybe_unused]] int g;			// default-initialization
	[[maybe_unused]] int n1 = 5, n2 = 2;	// copy-initialization
	[[maybe_unused]] int u ( 6 ), u2 ( 2 );	// direct-initialization

	[[maybe_unused]] int d { 7 }, d2 { 7 };	// direct-list initialization (recommended)
	[[maybe_unused]] int f {}, f2 {};	// value-initialization
	
	/*
	 * (<<) is an insertion operator (ex. std::cout << 4 moves the value 4 to the console.)
	 * (>>) is an extration operator (ex. std::cin >> x moves the value the user enteres from the keyboard into the variable x)
	 */

	int user_input{}, user_input2{};
	//std::cin >> user_input >> user_input2; // gets two numbers and store in variables ui, and ui2, input is seperated via spaces, tabs, or newlines
	// "abc123" outputs 0 while "123abc" outputs 123 but "abc" is left for later extraction

	//std::cout << "You entered " << user_input << " and " << user_input2 << '\n';
	
	/*
	 *
	 * 	UNINITIALIZED VARIABLES & UNDEFINED BEHAVIOR
	 *
	 */

	int p;
	std::cout << p << '\n';

	std::cout << sizeof(int) << '\n';

	/*
	 *
	 * 	C++ Formatting
	 *
	 */

	// C++ is not strict on formatting
	
	std::cout << 3 + 4
		   + 5 + 6
                   * 7 * 8;
	return 0;
}
