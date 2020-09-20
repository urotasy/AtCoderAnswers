#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int ans = 0;

    for ( int i = 0; i < 3; i++ ) {
        int s, e;
        cin >> s >> e;
        assert(s % 10 == 0 );
        ans += s * e / 10;
    }

    cout << ans << endl;
    return 0;
}
