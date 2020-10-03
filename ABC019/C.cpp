#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> a(N);
    for ( int i = 0; i < N; i++ ) cin >> a.at(i);

    map<int, int> out;
    for ( int i = 0; i < N; i++ ) {
        int n = a.at(i);
        while ( n % 2 == 0 ) n /= 2;
        out[n]++;
    }

    cout << out.size() << endl;
    return 0;
}

