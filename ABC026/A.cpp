#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int A;
    cin >> A;

    int ans = 0;
    for ( int x = 0; x <= A/2; x++ ) {
        ans = max(ans, x * (A - x));
    }

    cout << ans << endl;
    return 0;
}
