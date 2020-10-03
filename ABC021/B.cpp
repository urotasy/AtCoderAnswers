#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, a, b, K;
    cin >> N >> a >> b >> K;
    vector<int> P(K);
    for ( int i = 0; i < K; i++ ) cin >> P[i];
    P.push_back(a);
    P.push_back(b);

    sort(P.begin(), P.end());

    for ( int i = 0; i < K + 2 - 1; i++ ) {
        if ( P[i] == P[i+1] ) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}
