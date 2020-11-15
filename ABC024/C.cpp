#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, D, K;
    cin >> N >> D >> K;

    /* LR[i][0]: Li, LR[i][1]: Ri */
    vector<vector<int>> LR(D, vector<int>(2));
    for ( int i = 0; i < D; i++ ) cin >> LR[i][0] >> LR[i][1];

    /* ST[i][0]: Si, ST[i][1]: Ti */
    vector<vector<int>> ST(K, vector<int>(2));
    for ( int i = 0; i < K; i++ ) cin >> ST[i][0] >> ST[i][1];

    for ( int i = 0; i < K; i++ ) {
        int cur = ST[i][0];
        int dest = ST[i][1];
        bool go_right = (cur < dest) ? true : false;

        for ( int d = 0; d < D; d++ ) {
            if ( cur < LR[d][0] || LR[d][1] < cur ) {
                /* 移動対象の範囲外の街にいるので動けない */
                continue;
            }
            else if ( go_right ) {
                /* 数値が大きくなる方向へ T まで移動したい */
                cur = min(LR[d][1], dest);
            }
            else {
                /* 数値が小さくなる方向へ T まで移動したい */
                cur = max(LR[d][0], dest);
            }
            /* 目的地についたら終わり */
            if ( cur == dest ) {
                cout << d + 1 << endl;
                break;
            }
        }
    }
    return 0;
}
