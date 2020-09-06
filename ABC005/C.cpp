#include <bits/stdc++.h>

using namespace std;

#define INVALID_TIME (INT_MIN)

int main (void) {
    int T, N;
    cin >> T >> N;
    vector<int> A(N);
    for ( int i = 0; i < N; i++ ) cin >> A.at(i);
    int M;
    cin >> M;
    vector<int> B(M);
    for ( int i = 0; i < M; i++ ) cin >> B.at(i);

    for ( int i = 0; i < M; i++ ) {
        int b = B.at(i);

        /* 条件を満たすたこ焼きがあるかどうか判定する */
        bool found = false;
        for ( int j = 0; j < N; j++ ) {
            if ( A.at(j) <= b && b <= A.at(j) + T ) {
                A.at(j) = INVALID_TIME;
                found = true;
                break;
            }
        }
        /* なければその時点で終了 */
        if ( !found ) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl;
    return 0;
}

