#include <bits/stdc++.h>

using namespace std;

const vector<char> vowels = {'a', 'i', 'u', 'e', 'o'};

/* 文字が母音ならば true, そうでなければ false を返す */
static bool is_vowel (char c) {
    for ( size_t i = 0; i < vowels.size(); i++ ) {
        if ( c == vowels.at(i) ) return true;
    }
    return false;
}

int main (void) {
    string W;
    cin >> W;

    string ans;
    for ( size_t i = 0; i < W.size(); i++ ) {
        /* 母音以外を ans に追加する */
        if ( !is_vowel(W.at(i)) ) ans.push_back(W.at(i));
    }
    cout << ans << endl;

    return 0;
}
