#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int n, w;
    cin >> n >> w;
    vector<pair<int, int>> ab(n);
    for ( int i = 0; i < n; i++ ) { cin >> ab.at(i).first >> ab.at(i).second; }

    sort(ab.begin(), ab.end(), [](const pair<int, int>& a, const pair<int, int>& b) { return a.first > b.first; });

    long long ans = 0;
    for ( int i = 0; i < n; i++ )
    {
        int rest = ab.at(i).second;
        while ( rest > 0 )
        {
            if ( w <= 0 )
                break;
            ans += ab.at(i).first;
            rest--;
            w--;
        }
    }

    cout << ans << endl;

    return 0;
}
