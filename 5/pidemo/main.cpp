#include "pi.h"
#include <iostream>


double circumference(double radius);

//inline double pi(){return 3.14159;} // if you get rid of inline here, the compiler gets angy

int main()
{
    std::cout << pi() << '\n';
    std::cout << circumference(2.0) << '\n';

    return 0;
}
