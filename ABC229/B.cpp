#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string a, b;

    cin >> a >> b;

    int a_len = a.length();
    int b_len = b.length();
    int len = min(a_len, b_len);

    for ( int i = 0; i < len; i++ )
    {
        int ai = a.at(a_len - 1 - i) - '0';
        int bi = b.at(b_len - 1 - i) - '0';

        if ( ai + bi >= 10 )
        {
            cout << "Hard" << endl;
            goto RET;
        }
    }
    cout << "Easy" << endl;
RET:
    return 0;
}
