#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string N;
    cin >> N;
    int n_digit = N.size();

    int sum = 0;
    for ( int i = 0; i < n_digit; i++ ) {
        sum += N.at(i) - '0';
    }

    int ans = INT_MAX;
    for ( int bit = 0; bit < (1<<n_digit); bit++ ) {
        int temp_sum = sum;
        int n_deleted = 0;
        for ( int i = 0; i < n_digit; i++ ) {
            if ( ((bit>>i) & 1) == 1 ) {
                n_deleted++;
                temp_sum -= N.at(i) - '0';
            }
        }
        if ( temp_sum % 3 == 0 ) {
            ans = min(ans, n_deleted);
        }
    }

    if ( ans == INT_MAX || ans == n_digit ) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
