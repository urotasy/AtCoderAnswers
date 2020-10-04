#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int A, B, C, K, S, T;
    cin >> A >> B >> C >> K >> S >> T;

    int ans = A * S + B * T;
    if ( S + T >= K ) ans -= C * (S + T);

    cout << ans << endl;
    return 0;
}
