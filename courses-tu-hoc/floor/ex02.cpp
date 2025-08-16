#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x; cin >> x;

    
    /*
    if (x >= 0)
    {
        cout << (int)x << "\n";
    }
    else
    {
        int i = x;
        if (i == x) // Không nên viết như này vì x luôn có sự sai số
        {
            cout << x << "\n";
        }
        else
        {
            cout << (int)x - 1 << "\n";
        }
    }
    */
    
    /*
    x = 5 => 5
    x = 5.1 => 5

    x = -0 => -0
    x = -0.5 => -1
    */

    return 0;
}