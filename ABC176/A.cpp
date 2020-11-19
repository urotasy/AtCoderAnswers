#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, X, T;
    cin >> N >> X >> T;

    int ans = 0;
    int n = 0;
    while ( n < N ) {
        n += X;
        ans += T;
    }

    cout << ans << endl;
    return 0;
}
