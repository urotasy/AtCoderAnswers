#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int n;

    cin >> n;

    cout.fill('0');
    if ( n >= 42 )
        cout << "AGC" << setw(3) << n+1 << endl;
    else
        cout << "AGC" << setw(3) << n << endl;

    return 0;
}
