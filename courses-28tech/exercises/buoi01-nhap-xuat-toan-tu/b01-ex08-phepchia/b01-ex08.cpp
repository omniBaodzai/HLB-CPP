#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, b;
    cin >> b >> a;

    cout << a / b << "\n";
    cout << fixed << setprecision(2) << (float)a / b << "\n";

    return 0;
}