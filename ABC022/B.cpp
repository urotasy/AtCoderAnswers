#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    map<int, int> flower;
    int ans = 0;
    for ( int i = 0; i < N; i++ ) {
        int a;
        cin >> a;
        if ( flower.find(a) == flower.end() ) {
            /* 同じ種類が見つからなかったので受粉しない */
            flower[a]++;
        }
        else {
            /* 見つかったので受粉する */
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
