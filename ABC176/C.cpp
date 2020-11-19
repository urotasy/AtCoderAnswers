#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    long long ans = 0;
    int h_max = 0;
    for ( int i = 0; i < N; i++ ) {
        int A;
        cin >> A;

        if ( A < h_max ) {
            ans += h_max - A;
        }
        else {
            h_max = A;
        }
    }

    cout << ans << endl;
    return 0;
}
