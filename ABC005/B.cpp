#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    int ans = INT_MAX;

    for ( int i = 0; i < N; i++ ) {
        int T;
        cin >> T;
        ans = min(ans, T);
    }

    cout << ans << endl;

    return 0;
}
