#include <iostream>
using namespace std;

int main() {
    int a = 6;  // 0110
    int b = 3;  // 0011

    cout << "a & b = " << (a & b) << "\n";     // Bitwise AND
    cout << "a && b = " << (a && b) << "\n";   // Logical AND

    int c = 0;
    cout << "a && c = " << (a && c) << "\n";   // Logical AND
    cout << "a & c = " << (a & c) << "\n";     // Bitwise AND

    return 0;
}
