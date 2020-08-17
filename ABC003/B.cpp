#include <bits/stdc++.h>

using namespace std;

const vector<char> AtMark = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

/* @ で置き換えられる文字かどうか判定する */
static bool can_replace (char c) {
    for ( size_t i = 0; i < AtMark.size(); i++ ) {
        if ( c == AtMark.at(i) ) return true;
    }
    return false;
}

int main (void) {
    string S, T;
    cin >> S >> T;

    assert(S.size() == T.size());
    for ( size_t i = 0; i < S.size(); i++ ) {
        /*
         * どちらも同じ文字ならオッケー
         * 入力文字列の片方が @ なら置き換えられるか確認
         * それ以外 (== @ 以外の文字で異なる) はダメ
         */
        if ( S.at(i) == T.at(i) ) continue;
        else if ( S.at(i) == '@' ) {
            if ( !can_replace(T.at(i)) ) goto LOSE;
        }
        else if ( T.at(i) == '@' ) {
            if ( !can_replace(S.at(i)) ) goto LOSE;
        }
        else goto LOSE;
    }

    cout << "You can win" << endl;
    return 0;
LOSE:
    cout << "You will lose" << endl;
    return 0;
}

