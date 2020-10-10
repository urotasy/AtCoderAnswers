#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;

    /* friends[i] : friends ID list of user i */
    vector<vector<int>> friends(N);

    for ( int i = 0; i < M; i++ ) {
        int A, B;
        cin >> A >> B;
        A--; B--;
        friends.at(A).push_back(B);
        friends.at(B).push_back(A);
    }

    for ( int i = 0; i < N; i++ ) {
        map<int, int> indirect_friends;

        /* 自分自身や直接の友人を含めた情報を作成 */
        for ( auto direct : friends.at(i) ) {
            for ( auto indirect : friends.at(direct) ) {
                indirect_friends[indirect]++;
            }
        }

        /* 自分と直接の友人の数を除く */
        int ans = indirect_friends.size();
        if ( indirect_friends.find(i) != indirect_friends.end() ) ans--;
        for ( auto direct : friends.at(i) ) {
            if ( indirect_friends.find(direct) != indirect_friends.end() ) ans--;
        }

        cout << ans << endl;
    }

    return 0;
}
