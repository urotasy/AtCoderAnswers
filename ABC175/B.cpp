#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> L(N);
    for ( int i = 0; i < N; i++ ) cin >> L[i];

    if ( N < 3 ) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    for ( int i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            if ( L[i] == L[j] ) continue;
            for ( int k = j + 1; k < N; k++ ) {
                if ( L[i] == L[k] || L[j] == L[k] ) continue;
                if ( L[i] + L[j] > L[k] && L[i] + L[k] > L[j] && L[j] + L[k] > L[i] ) {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
