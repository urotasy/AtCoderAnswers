#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    string S;
    cin >> N >> S;

    string s = "b";
    for ( int i = 1; i <= N / 2; i++ ) {
        if ( i % 3 == 1 ) s = 'a' + s + 'c';
        else if ( i % 3 == 2 ) s = 'c' + s + 'a';
        else s = 'b' + s + 'b';
    }

    if ( S == s ) cout << N / 2 << endl;
    else cout << -1 << endl;
    return 0;
}
