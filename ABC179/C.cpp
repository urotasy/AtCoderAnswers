#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    long long ans = 0;
    for ( int a = 1; a <= N; a++ ) {
        for ( int b = 1; b <= N; b++ ) {
            if ( a * b < N ) ans++;
            else break;
        }
    }

    cout << ans << endl;
    return 0;
}
