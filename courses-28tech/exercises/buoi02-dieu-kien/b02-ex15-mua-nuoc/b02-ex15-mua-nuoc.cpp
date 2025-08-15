#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, a, b;
    cin >> n >> a >> b;

    if ((b / 2.0) <= a) 
    {
        if (n % 2 == 0)
        {
            cout << (n / 2) * b;
        }
        else 
        {
            cout << (n / 2) * b + (n % 2) * a;
        }
    }
    else 
    {
        cout << n * a;
    }

    return 0;
}