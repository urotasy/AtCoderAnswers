#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int txa, tya, txb, tyb, T, V, n;
    cin >> txa >> tya >> txb >> tyb >> T >> V >> n;
    vector<pair<int, int>> xy(n);
    for ( int i = 0; i < n; i++ ) cin >> xy.at(i).first >> xy.at(i).second;

    int enable_dist = T * V;
    for ( int i = 0; i < n; i++ ) {
        int x = xy.at(i).first, y = xy.at(i).second;
        /* 電話前位置 -> 女の子の家 -> 電話後位置 に最短で移動する距離 */
        double dist = sqrt((x - txa) * (x - txa) + (y - tya) * (y - tya)) +
                      sqrt((txb - x) * (txb - x) + (tyb - y) * (tyb - y));
        if ( dist <= enable_dist ) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
