#include <iostream>
using namespace std;

bool checkA() {
    cout << "checkA was called\n";
    return false;
}

bool checkB() {
    cout << "checkB was called\n";
    return true;
}

int main() {
    cout << "== Dùng && ==\n";
    if (checkA() && checkB()) {
        cout << "Result is true\n";
    } else {
        cout << "Result is false\n";
    }

    cout << "\n== Dùng & ==\n";
    if (checkA() & checkB()) {
        cout << "Result is true\n";
    } else {
        cout << "Result is false\n";
    }

    return 0;
}
