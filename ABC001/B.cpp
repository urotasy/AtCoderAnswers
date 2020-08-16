#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int m;
    cin >> m;

    if      ( m < 100 ) {
        cout << "00";
    }
    else if ( m <= 5000 ) {
        int ans = m * 10 / 1000;
        /* 1桁の数値なら "0" を出しておく */
        if ( ans < 10 ) cout << "0";
        cout << ans;
    }
    else if ( m <= 30000 ) {
        int km = m / 1000;
        cout << km + 50;
    }
    else if ( m <= 70000 ) {
        int km = m / 1000;
        cout << (km - 30) / 5 + 80;
    }
    else {
        cout << "89";
    }
    cout << endl;

    return 0;
}

