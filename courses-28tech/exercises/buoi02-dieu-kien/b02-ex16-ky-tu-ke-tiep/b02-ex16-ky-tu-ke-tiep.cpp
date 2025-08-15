#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char c;
    cin >> c;

    if (c >= 65 && c <= 89)
    {
        cout << char(c + 1 + 32);
    }
    
    if (c >= 97 && c <= 121)
    {
        cout << char(c + 1);
    }

    if (c == 'Z')
    {
        cout << char(c + 32 - 25);
    }

    if (c == 'z')
    {
        cout << char(c - 25);
    }

    return 0;
}