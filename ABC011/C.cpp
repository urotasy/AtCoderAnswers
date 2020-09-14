#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, NG1, NG2, NG3;
    cin >> N >> NG1 >> NG2 >> NG3;

    int n = N;
    int i = 0;
    if ( n == NG1 || n == NG2 || n == NG3 )
        goto NO;
    while ( n > 0 ) {
        if ( n - 3 != NG1 && n - 3 != NG2 && n - 3 != NG3 )
            n -= 3;
        else if ( n - 2 != NG1 && n - 2 != NG2 && n - 2 != NG3 )
            n -= 2;
        else if ( n - 1 != NG1 && n - 1 != NG2 && n - 1 != NG3 )
            n -= 1;
        else
            goto NO;
        i++;
    }

    if ( i > 100 )
        goto NO;
    cout << "YES" << endl;
    return 0;
NO:
    cout << "NO" << endl;
    return 0;
}
