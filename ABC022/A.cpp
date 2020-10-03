#include <bits/stdc++.h>

using namespace std;

static bool is_best_body (int w, int min, int max) {
    return min <= w && w <= max;
}

int main (void) {
    int N, S, T, W;
    cin >> N >> S >> T >> W;

    int ans = 0;
    if ( is_best_body(W, S, T) ) ans++;
    for ( int i = 0; i < N - 1; i++ ) {
        int w_diff;
        cin >> w_diff;
        W += w_diff;
        if ( is_best_body(W, S, T) ) ans++;
    }

    cout << ans << endl;
    return 0;
}
