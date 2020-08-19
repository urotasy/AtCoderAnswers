#include <bits/stdc++.h>

using namespace std;

/*
 * 問題の操作を行うと先頭の数字が最後尾まで移動
 * していく。つまりいつかは元の状態に戻りそう。
 * 試しに以下のようなコードをループ内に仕込んで
 * 100 操作を毎回出力してみると 6 * 5 = 30 回で
 * [1, 2, 3, 4, 5, 6] に戻ることがわかる
 *
 * printf("%3d : [%d, %d, %d, %d, %d, %d]\n",
 *        i, array.at(0), array.at(1), array.at(2),
 *        array.at(3), array.at(4), array.at(5));
 */

int main (void) {
    int N;
    cin >> N;

    /*
     * 30 回毎に初期状態に戻るので、実際に操作する
     * 必要がある回数は 30 の剰余で求められる
     */
    N %= 30;

    vector<int> array = {1, 2, 3, 4, 5, 6};

    for ( int i = 0; i < N; i++ ) {
        swap(array.at((i%5)), array.at((i%5)+1));
    }

    printf("%d%d%d%d%d%d\n",
            array.at(0), array.at(1), array.at(2),
            array.at(3), array.at(4), array.at(5));
    return 0;
}
