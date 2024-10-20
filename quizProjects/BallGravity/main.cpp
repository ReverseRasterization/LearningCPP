#include <iostream>

void displayHeight(int t, double height)
{
	double distanceFallen{ ( 9.8 * ( t * t ) ) / 2 };
	
	if (distanceFallen > height)
		std::cout << "At " << t << " seconds, the ball is on the ground." << '\n';
	else
		std::cout << "At " << t << " seconds, the ball is at height: " << height - distanceFallen << " meters" << '\n';
		if (t < 5){displayHeight(t+1, height);}
}

int main()
{
	std::cout << "Enter the height of the tower in meters: ";
	double height{};
	std::cin >> height;

	displayHeight(0, height);

	return 0;
}
