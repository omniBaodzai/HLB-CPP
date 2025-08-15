#include <iostream>
#include <cmath>


int main()
{
    double x = pow(10, 9); // Không fixed: 1e+09 = 1000000000
    std::cout << std::fixed << x << std::endl; // Có fixed: 1000000000.000000

    return 0;
}