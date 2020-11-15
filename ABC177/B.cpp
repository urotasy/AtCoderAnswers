#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string S, T;
    cin >> S >> T;

    int ans = INT_MAX;
    for ( size_t i = 0; i < S.size(); i++ ) {
        /* T が末尾まで入らない位置に来たら終了 */
        if ( i + T.size() > S.size() ) break;

        int n_sbst = 0; /* 置換数 */
        for ( size_t j = 0; j < T.size(); j++ ) {
            if ( S[i+j] != T[j] ) n_sbst++;
        }
        ans = min(ans, n_sbst);
    }

    cout << ans << endl;
    return 0;
}
