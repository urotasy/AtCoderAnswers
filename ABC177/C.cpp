#include <bits/stdc++.h>

using namespace std;

#define MOD (1000000007)

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for ( int i = 0; i < N; i++ ) cin >> A[i];

    long long sum = 0;
    for ( int i = 0; i < N; i++ ) {
        sum += A[i];
        if ( sum > MOD ) sum -= MOD;
    }

    long long ans = 0;
    for ( int i = 0; i < N; i++ ) {
        sum -= A[i];
        if ( sum < 0 ) sum += MOD;
        ans += (A[i] * sum) % MOD;
        if ( ans > MOD ) ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}
