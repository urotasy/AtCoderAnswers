#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int X;
    cin >> X;

    int ans = 0;
    while ( X > 0 ) {
        ans += X % 10;
        X /= 10;
    }

    cout << ans << endl;
    return 0;
}
