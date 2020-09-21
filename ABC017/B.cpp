#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string S;
    cin >> S;

    for ( size_t i = 0; i < S.size(); i++ ) {
        if ( i != S.size() - 1 && S.at(i) == 'c' && S.at(i+1) == 'h' ) {
            /* 'ch' の場合は2文字進める */
            i++;
            continue;
        }
        else if ( S.at(i) == 'o' || S.at(i) == 'k' || S.at(i) == 'u' ) {
            continue;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
