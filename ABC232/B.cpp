#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string s, t;
    cin >> s >> t;

    int first_diff = s.at(0) - t.at(0);
    if ( first_diff < 0 ) first_diff += 26;

    for ( size_t i = 1; i < s.size(); i++ )
    {
        int diff = s.at(i) - t.at(i);
        if ( diff < 0 ) diff += 26;
        if ( first_diff != diff )
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
