#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, A, B;
    cin >> N >> A >> B;

    int cur = 0;
    for ( int i = 0; i < N; i++ ) {
        string s;
        int d;
        cin >> s >> d;

        d = max(A, min(B, d));
        if ( s == "East" ) d *= -1;
        cur += d;
    }

    if ( cur == 0 ) cout << 0 << endl;
    else cout << ((cur < 0) ? "East " : "West ") << abs(cur) << endl;
    return 0;
}
