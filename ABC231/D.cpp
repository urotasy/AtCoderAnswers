#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> neighbors(n, vector<int>(0));
    int first;
    queue<int> q;
    vector<bool> found(n, false);

    for ( int i = 0; i < m; i++ )
    {
        int a, b;
        cin >> a >> b;
        neighbors.at(a-1).push_back(b-1);
        neighbors.at(b-1).push_back(a-1);
        first = b-1;
    }

    for ( int i = 0; i < n; i++ )
    {
        if ( neighbors.at(i).size() > 2 )
        {
            cout << "No" << endl;
            goto RET;
        }
        for ( size_t j = 0; j < neighbors.at(i).size(); j++ )
        {
            bool found = false;
            for ( size_t k = 0; k < neighbors.at(neighbors.at(i).at(j)).size(); k++ )
            {
                if ( neighbors.at(neighbors.at(i).at(j)).at(k) == i )
                    found = true;
            }
            if ( !found )
            {
                cout << "No" << endl;
                goto RET;
            }
        }
    }

    q.push(first);

    while ( !q.empty() )
    {
        int n = q.front(); q.pop();
        for ( size_t i = 0; i < neighbors.at(n).size(); i++ )
        {
            if ( neighbors.at(n).at(i) != n && found.at(neighbors.at(n).at(i)) )
            {
                cout << "No" << endl;
                goto RET;
            }
            found.at(neighbors.at(n).at(i)) = true;
            q.push(neighbors.at(n).at(i));
        }
    }

    cout << "Yes" << endl;
RET:
    return 0;
}
