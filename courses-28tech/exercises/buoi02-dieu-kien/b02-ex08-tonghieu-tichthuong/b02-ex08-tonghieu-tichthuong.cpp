#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    if (b != 0)
    {
        cout << a + b << "\n";
        cout << a - b << "\n";
        cout << (long long)a * b << "\n";
        cout << fixed << setprecision(4) << 1.0 *a / b << "\n";
    }
    else 
    {
        cout << a + b << "\n";
        cout << a - b << "\n";
        cout << a * b << "\n";
        cout << "INVALID" << "\n";
    }

    return 0;
} 