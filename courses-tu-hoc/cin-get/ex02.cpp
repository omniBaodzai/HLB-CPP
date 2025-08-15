#include <iostream>
using namespace std;

int main() {
    char ch1, ch2;

    cout << "Nhap ky tu dau tien (dung cin >> ch1): ";
    cin >> ch1;

    // Xoa ky tu newline con sot lai
    cin.ignore();

    cout << "Nhap ky tu thu hai (dung cin.get(ch2)): ";
    cin.get(ch2);

    cout << "\nKy tu thu nhat (cin >> ch1): [" << ch1 << "]" << endl;
    cout << "Ky tu thu hai (cin.get(ch2)): [" << ch2 << "]" << endl;

    return 0;
}

