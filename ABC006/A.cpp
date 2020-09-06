#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    /* 3で割り切れるなら "YES" */
    if ( N % 3 == 0 ) {
        cout << "YES" << endl;
        return 0;
    }
    /* 3が含まれるなら "YES" */
    {
        int n = N;
        /* 1桁ずつ3かどうか判定する */
        while ( n > 0 ) {
            if ( n % 10 == 3 ) {
                cout << "YES" << endl;
                return 0;
            }
            n /= 10;
        }
    }
    /* どちらの条件も満たしていなければ "NO" */
    cout << "NO" << endl;
    return 0;

    return 0;
}
