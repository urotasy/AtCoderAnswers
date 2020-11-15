#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    int n_seq_doubles = 0;
    bool triple_doubles = false;
    for ( int i = 0; i < N; i++ ) {
        int d1, d2;
        cin >> d1 >> d2;
        if ( d1 == d2 ) {
            n_seq_doubles++;
            if ( n_seq_doubles == 3 ) {
                triple_doubles = true;
                break;
            }
        }
        else
            n_seq_doubles = 0;
    }

    if ( triple_doubles ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
