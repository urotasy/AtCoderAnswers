#include <bits/stdc++.h>

using namespace std;

int main (void) {
    long long n, a, b, p, q, r, s;

    cin >> n >> a >> b >> p >> q >> r >> s;

    long long min1 = max(1 - a, 1 - b);
    long long max1 = min(n - a, n - b);
    long long min2 = max(1 - a, b - n);
    long long max2 = min(n - a, b - 1);

    for ( long long i = p; i <= q; i++ )
    {
        for ( long long j = r; j <= s; j++ )
        {
            if ( a + min1 <= i && i <= a + max1 &&
                 b + min1 <= j && j <= b + max1 &&
                 a - i == b - j )
                cout << "#";
            else if ( a + min2 <= i && i <= a + max2 &&
                      b - max2 <= j && j <= b - min2 &&
                      a - i == j - b )
                cout << "#";
            else
                cout << ".";
        }
        cout << endl;
    }

    return 0;
}
