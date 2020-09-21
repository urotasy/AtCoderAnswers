#include <bits/stdc++.h>

using namespace std;

int main (void) {
    vector<int> score(3);
    vector<int> sorted(3);
    for ( int i = 0; i < 3; i++ ) {
        cin >> score[i];
        sorted[i] = score[i];
    }

    sort(sorted.begin(), sorted.end(), greater<int>());
    map<int, int> m;   /* score -> index */
    for ( int i = 0; i < 3; i++ ) m[sorted[i]] = i + 1;

    for ( int i = 0; i < 3; i++ ) {
        cout << m[score[i]] << endl;
    }
    return 0;
}
