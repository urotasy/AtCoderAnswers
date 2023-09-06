#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n+1);
    for ( size_t i = 1; i < a.size(); i++ ) cin >> a.at(i);

    vector<int> known(n+1, 0);
    known.at(x) = 1;
    int ans = 1;
    bool end = false;
    while ( true )
    {
      if ( known.at(a.at(x)) != 0 )
        break;
      ans++;
      known.at(a.at(x)) = 1;
      x = a.at(x);
    }

    cout << ans << endl;
    return 0; 
}
