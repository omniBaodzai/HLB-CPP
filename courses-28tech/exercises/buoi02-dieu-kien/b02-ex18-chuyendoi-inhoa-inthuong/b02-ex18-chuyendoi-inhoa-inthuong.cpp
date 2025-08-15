#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c; cin >> c;

    if (c >= 65 && c <= 90)
    {
        cout << char(c + 32);
    }
    else if (c >= 97 && c <= 122)
    {
        cout << char(c - 32);
    }
    else
    {
        cout << c;
    }

    return 0;
}