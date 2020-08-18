#include <bits/stdc++.h>

using namespace std;

int main (void) {
    vector<vector<char>> c(4, vector<char>(4));
    for ( int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 4; j++ ) cin >> c.at(i).at(j);
    }

    /* 180 度回転させる == 縦横方向に逆転する */
    for ( int i = 3; i >= 0; i-- ) {
        for ( int j = 3; j >= 0; j-- ) {
            cout << c.at(i).at(j);
            /* 行末以外なら空白を追加 */
            if ( j != 0 ) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
