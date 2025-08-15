#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Nhap mot ky tu bat ky (co the la dau cach, tab, hoac xuong dong): ";
    ch = cin.get();

    cout << "Ky tu ban vua nhap co ma ASCII la: " << (int)ch << endl;
    cout << "Ky tu do la: [" << ch << "]" << endl;

    return 0;
}

