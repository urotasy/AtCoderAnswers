#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    for ( int i = 0; i < h; i++ ) cin >> c.at(i);

    vector<vector<int>> ans(h, vector<int>(w, 0));

    for ( int i = h-1; 0 <= i; i-- )
    {
        for ( int j = w-1; 0 <= j; j-- )
        {
            if ( c.at(i).at(j) == '#' )
                ans.at(i).at(j) = 0;
            else if ( h <= i+1 && w <= j+1 )
                ans.at(i).at(j) = 1;
            else if ( h <= i+1 )
            {
                assert(j+1 < w);
                ans.at(i).at(j) = ans.at(i).at(j+1) + 1;
            }
            else if ( w <= j+1 )
            {
                assert(i+1 < h);
                ans.at(i).at(j) = ans.at(i+1).at(j) + 1;
            }
            else
                ans.at(i).at(j) = max(ans.at(i+1).at(j), ans.at(i).at(j+1)) + 1;
        }
    }

    cout << ans.at(0).at(0) << endl;
    return 0;
}
