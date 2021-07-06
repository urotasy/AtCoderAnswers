#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, K;
    cin >> N >> K;

    int ans = 0;
    /* calc sum of hundreds digit */
    ans += 100 * K * N * (N + 1) / 2;
    /* calc sum of one digit */
    ans += N * K * (K + 1) / 2;

    cout << ans << endl;
}
