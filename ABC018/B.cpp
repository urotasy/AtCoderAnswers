#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string S;
    int N;
    cin >> S >> N;

    for ( int i = 0; i < N; i++ ) {
        int l, r;
        cin >> l >> r;
        reverse(S.begin()+l-1, S.begin()+r);
    }

    cout << S << endl;
    return 0;
}
