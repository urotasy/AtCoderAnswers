#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string s1, s2;

    cin >> s1 >> s2;

    if ( s1 == "##" || s2 == "##" ||
         (s1 == "#." && s2 == "#.") ||
         (s1 == ".#" && s2 == ".#") )
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}

