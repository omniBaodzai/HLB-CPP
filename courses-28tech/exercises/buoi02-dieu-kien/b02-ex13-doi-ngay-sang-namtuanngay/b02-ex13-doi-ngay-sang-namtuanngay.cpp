#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    cout << n / 365 << " " << (n % 365) / 7 << " " << (n % 365) % 7;

    return 0;
}   