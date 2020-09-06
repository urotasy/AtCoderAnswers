#include <bits/stdc++.h>

using namespace std;

const int MOD = 10007;

int main (void) {
    int n;
    cin >> n;

    /* n == 1 のときに初期値設定で範囲外アクセスしないために +2 しておく */
    vector<int> tri(n+2);
    tri.at(0) = 0;
    tri.at(1) = 0;
    tri.at(2) = 1;

    int sum = tri.at(0) + tri.at(1) + tri.at(2);
    for ( int i = 3; i < n; i++ ) {
        if ( sum >= MOD ) tri.at(i) = sum % MOD;
        else              tri.at(i) = sum;
        sum = sum - tri.at(i-3) + tri.at(i);
    }

    cout << tri.at(n-1) << endl;
    return 0;
}
