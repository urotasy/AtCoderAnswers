#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    int multi_sum = 0;
    int multi_tbl[10][10];
    for ( int i = 1; i <= 9; i++ ) {
        for ( int j = 1; j <= 9; j++ ) {
            multi_tbl[i][j] = i * j;
            multi_sum += i * j;
        }
    }

    for ( int i = 1; i <= 9; i++ ) {
        for ( int j = 1; j <= 9; j++ ) {
            if ( N == multi_sum - multi_tbl[i][j] )
                printf("%d x %d\n", i, j);
        }
    }

    return 0;
}
