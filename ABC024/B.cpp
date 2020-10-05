#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, T;
    cin >> N >> T;
    vector<int> A(N);
    for ( int i = 0; i < N; i++ ) cin >> A[i];

    /* 最後の人が通過してから T 秒は開き続ける */
    int ans = T;
    for ( int i = 0; i < N-1; i++ ) {
        ans += (A[i] + T < A[i+1]) ? T : A[i+1] - A[i];
    }

    cout << ans << endl;
    return 0;
}
