#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "2 mũ 0: " << pow(2, 0) << "\n";
    cout << "0 mũ 2: " << pow(0, 2) << "\n";
    cout << "0 mũ 0: " << pow(0, 0) << "\n";
    cout << "-2 mũ 3: " << pow(-2, 3) << "\n";
    cout << "2 mũ -2: " << pow(2, -2) << "\n";
    cout << "9 mũ 0.5: " << pow(9, 0.5) << "\n";
    
    return 0;
}