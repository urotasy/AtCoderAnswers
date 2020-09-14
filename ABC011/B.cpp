#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string S;
    cin >> S;

    for ( size_t i = 0; i < S.size(); i++ ) {
        if ( i == 0 )   cout << (char)toupper(S.at(i));
        else            cout << (char)tolower(S.at(i));
    }
    cout << endl;
    return 0;
}
