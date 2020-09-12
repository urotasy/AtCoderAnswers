#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string A;
    cin >> A;

    /*
     * "a" の場合は "-1" を出力する
     * 長さ2以上の文字列なら末尾の文字を削除する。
     * それ以外 (長さ1かつ "a" 以外) ならば1つ前の文字を出力する
     */
    if ( A == "a" ) {
        cout << -1 << endl;
    }
    else if ( A.size() >= 2 ) {
        cout << A.substr(0, A.size() - 1) << endl;
    }
    else {
        cout << (char)(A.at(0) - 1) << endl;
    }

    return 0;
}
