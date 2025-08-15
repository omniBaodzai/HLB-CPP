#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 1.0, b = 2.34567, c = 123456.789;

    cout << setw(10) << fixed << setprecision(2) << a << endl;
    cout << setw(10) << fixed << setprecision(3) << b << endl;
    cout << setw(10) << fixed << setprecision(1) << c << endl;

    return 0;
}

