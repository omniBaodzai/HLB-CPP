#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        cout << "YES";
    else 
        cout << "NO";

    return 0;
}