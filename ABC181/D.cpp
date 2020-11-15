#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string s;
    cin >> s;

    if ( s.size() == 1 ) {
        if ( s == "8" ) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    else if ( s.size() == 2 ) {
        int n = stoi(s);
        int nr = n % 10 * 10 + n / 10;
        if ( n % 8 == 0 || nr % 8 == 0 ) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    else {
        vector<int> cnt(10, 0);
        for ( auto c : s ) cnt[c - '0']++;
        for ( int i = 112; i < 1000; i += 8 ) {
            auto temp_cnt = cnt;
            for ( char c : to_string(i) ) temp_cnt[c - '0']--;
            if( all_of(temp_cnt.begin(), temp_cnt.end(), [](int n) { return n >= 0; }) ) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
