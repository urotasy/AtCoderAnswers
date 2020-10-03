#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string s;
    cin >> s;

    string ans;
    for ( size_t i = 0; i < s.size(); i++ ) {
        size_t j = i;
        while ( j < s.size() && s.at(j) == s.at(i) ) j++;
        ans.push_back(s.at(i));
        ans += to_string(j - i);
        i = j - 1;
    }

    cout << ans << endl;
    return 0;
}
