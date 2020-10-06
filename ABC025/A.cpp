#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string S;
    int N;
    cin >> S >> N;

    vector<string> cand;
    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 5; j++ ) {
            string s;
            s.push_back(S[i]);
            s.push_back(S[j]);
            cand.push_back(s);
        }
    }

    sort(cand.begin(), cand.end());

    cout << cand[N-1] << endl;
    return 0;
}
