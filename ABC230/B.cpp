#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string s;

    cin >> s;

    /* prepare input string for starting with "oxx" */
    if ( s.at(0) == 'x' )
    {
        if ( s.length() > 1 && s.at(1) == 'x' )
            s.insert(0, "o");
        else
            s.insert(0, "ox");
    }

    for ( size_t i = 0; i < s.length(); i++ )
    {
        switch ( i % 3 )
        {
          case 0:
            if ( s.at(i) != 'o' )
            {
                cout << "No" << endl;
                goto RET;
            }
            break;
          case 1:
          case 2:
            if ( s.at(i) != 'x' )
            {
                cout << "No" << endl;
                goto RET;
            }
            break;
          default:
            assert(0);
        }
    }
    cout << "Yes" << endl;
RET:
    return 0;
}
