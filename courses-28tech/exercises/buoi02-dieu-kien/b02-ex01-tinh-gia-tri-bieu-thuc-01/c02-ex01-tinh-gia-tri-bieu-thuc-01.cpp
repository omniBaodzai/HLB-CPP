#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; cin >>   x;

    cout << 1ll * x * x * x + 1ll * 3 * x * x + x + 1;

    return 0;
}