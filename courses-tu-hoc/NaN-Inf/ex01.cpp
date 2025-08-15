#include <iostream>
#include <cmath>

int main() {
    double a = 0.0 / 0.0; // NaN
    double b = 10.0 / 0.0; // +inf

    std::cout << "a = " << a << '\n';
    std::cout << "b = " << b << '\n';

    if (std::isnan(a))
		std::cout << "a is NaN\n";
		
    if (std::isinf(b))
		std::cout << "b is Infinity\n";
}

