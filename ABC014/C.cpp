#include <bits/stdc++.h>

using namespace std;

#define N_COLOR (1000001)

int main (void) {
    int n;
    cin >> n;
    vector<int> result(N_COLOR+1, 0);    /* 累積和のための配列 */

    for ( int i = 0; i < n; i++ ) {
        int a, b;
        cin >> a >> b;
        result.at(a)++;
        result.at(b+1)--;
    }

    /* 配列を累積和に変換 */
    for ( int i = 1; i <= N_COLOR; i++ ) {
        result.at(i) += result.at(i-1);
    }

    /* 最大値が答え */
    int ans = 0;
    for ( int i = 0; i <= N_COLOR; i++ ) {
        ans = max(ans, result.at(i));
    }

    cout << ans << endl;
    return 0;
}
