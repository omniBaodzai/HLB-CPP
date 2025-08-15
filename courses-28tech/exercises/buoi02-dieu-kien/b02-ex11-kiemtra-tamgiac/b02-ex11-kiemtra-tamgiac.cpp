#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b >0 && c > 0)
    {
        if(a + b > c && b + c > a && a + c > b)
        {
            if ((a == b && b == c) || (b == c && c == a) || (c == a && a == b))
                cout << 1;
            else if (a == b || b == c || a == c)
                cout << 2;
            else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
            {
                cout << 3;
            }
            else 
            {
                cout << 4;
            }
        }
        else
        {
            cout << "INVALID";
        }
    }
    else
        cout << "INVALID";

    return 0;
}