#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for ( int i = 0; i < N; i++ ) cin >> A[i];

    int ans = -1;
    int max_gcdscore = 0;
    for ( int i = 2; i < 1001; i++ ) {
        int gcdscore = 0;
        for ( int j = 0; j < N; j++ ) {
            if ( A[j] % i == 0 ) gcdscore++;
        }
        if ( gcdscore > max_gcdscore ) {
            ans = i;
            max_gcdscore = gcdscore;
        }
    }

    cout << ans << endl;
    return 0;
}
