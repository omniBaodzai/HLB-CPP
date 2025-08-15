#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if ( a < b)
    {
        cout << 0 << "\n";
        cout << b << "\n";
    }
    else if (a == b)
    {
        cout << a << "\n";
        cout << b << "\n";
    }
    else 
    {
        cout << (a / b) * b << "\n";
        cout << ((a / b) + 1) * b << "\n";
    }

    return 0;
}