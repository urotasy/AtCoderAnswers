#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    map<string, int> votes;
    cin >> N;

    /* map に各構成委員の得票数を格納しつつ、最大の得票数をカウント */
    int max_votes = 0;
    for ( int i = 0; i < N; i++ ) {
        string s;
        cin >> s;
        votes[s]++;
        max_votes = max(max_votes, votes[s]);
    }

    /* 最大の得票数の1人の名前を出力 */
    for ( auto itr : votes ) {
        if ( itr.second == max_votes ) {
            cout << itr.first << endl;
            break;
        }
    }

    return 0;
}
