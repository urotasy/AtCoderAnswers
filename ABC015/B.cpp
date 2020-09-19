#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    int n = 0, sum = 0;
    for ( int i = 0; i < N; i++ ) {
        int a;
        cin >> a;

        if ( a != 0 ) {
            n++;
            sum += a;
        }
    }

    cout << (int)ceil((float)sum / n) << endl;
    return 0;
}

