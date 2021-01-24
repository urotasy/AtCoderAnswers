#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string S;
    cin >> S;

    int ans = 0;
    for ( size_t i = 0; i < S.size(); i++ ) {
        int n = 0;
        while ( S[i] == 'R' ) {
            i++;
            n++;
        }
        ans = max(ans, n);
    }

    cout << ans << endl;
    return 0;
}
