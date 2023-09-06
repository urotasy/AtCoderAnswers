#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int n;
    map<string, int> names;

    cin >> n;
    for ( int i = 0; i < n; i++ )
    {
      string s;
      cin >> s;
      names[s]++;
    }

    int max_votes = 0;
    string ans;
    for ( auto iter : names )
    {
      if ( max_votes < iter.second )
      {
        ans = iter.first;
        max_votes = iter.second;
      }
    }

    cout << ans << endl;
    return 0;
}
