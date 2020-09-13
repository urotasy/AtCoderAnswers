#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    int top = 0, second = 0;
    for ( int i = 0; i < N; i++ ) {
        int A;
        cin >> A;

        if ( top < A ) {
            second = top;
            top = A;
        }
        else if ( second < A && A < top ) {
            second = A;
        }
    }

    cout << second << endl;
    return 0;
}
