#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;

    int n_adult, n_old, n_baby;

    /*
     * 老人の人数は 0 or 1 のどちらかを試すだけでよい。
     * なぜならば、老人2人 == 大人1人 + 赤ちゃん1人 で置き換えられるから
     */

    /* 老人0人のパターン */
    n_old = 0;
    for ( n_adult = 0 ; n_adult <= (N - n_old); n_adult++ ) {
        n_baby = N - n_adult - n_old;
        if ( n_adult * 2 + n_old * 3 + n_baby * 4 == M ) {
            printf("%d %d %d\n", n_adult, n_old, n_baby);
            return 0;
        }
    }

    /* 老人1人のパターン */
    n_old = 1;
    for ( n_adult = 0 ; n_adult <= (N - n_old); n_adult++ ) {
        n_baby = N - n_adult - n_old;
        if ( n_adult * 2 + n_old * 3 + n_baby * 4 == M ) {
            printf("%d %d %d\n", n_adult, n_old, n_baby);
            return 0;
        }
    }

    /* 組み合わせが見つからなかったときのみここに来る */
    printf("-1 -1 -1\n");
    return 0;
}
