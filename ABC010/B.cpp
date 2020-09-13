#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int n;
    cin >> n;

    /* 花びらの枚数を (6の倍数 + 1) or (6の倍数 + 3) にする必要がある */
    int ans = 0;
    for ( int i = 0; i < n; i++ ) {
        int a, mod;
        cin >> a;

        mod = a % 6;
        /* 後の計算を簡略化するために余り0を余り6とする */
        if ( mod == 0 ) mod = 6;
        if ( mod == 1 || mod == 3 ) continue;
        if ( mod < 3 ) ans += mod - 1;
        else ans += mod - 3;
    }

    cout << ans << endl;
    return 0;
}
