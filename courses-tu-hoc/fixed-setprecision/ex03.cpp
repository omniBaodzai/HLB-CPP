#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(10) << "Ten" << setw(10) << "Diem" << endl;
    cout << setw(10) << "Nam" << setw(10) << 9.5 << endl;
    cout << setw(10) << "Bao"  << setw(10) << 8.75 << endl;
    return 0;
}

