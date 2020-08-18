#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, M;
    cin >> N >> M;
    /* 各議員の知り合いリスト c を作成 */
    vector<vector<bool>> c(N, vector<bool>(N, false));
    for ( int i = 0; i < M; i++ ) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        c.at(x).at(y) = true;
        c.at(y).at(x) = true;
    }

    /*
     * 派閥メンバーの選び方のありうるすべてを試す
     * i の bit が 1 の議員をメンバーとした派閥を作成できるかどうかを判定する
     */
    int ans = 0;
    for ( int m = 0; m < (1<<N); m++ ) {
        /* 作ってみた派閥のメンバーリストを作成する */
        vector<int> member;
        for ( int i = 0; i < N; i++ ) {
            if ( ((m>>i) & 1) == 1 ) member.push_back(i);
        }

        /* 作ってみた派閥のメンバーが全員互いに知り合いか調べる */
        bool able = true;
        if ( member.size() == 0 ) continue;
        for ( int i = 0; i < (int)member.size(); i++ ) {
            for ( int j = i+1; j < (int)member.size(); j++ ) {
                /* 一人でも知り合いでないメンバーがいればその派閥は作れない */
                if ( !c.at(member.at(i)).at(member.at(j)) ) {
                    able = false;
                    break;
                }
            }
            if ( !able ) break;
        }
        /* 作成可能な派閥のメンバー数の最大値を求める */
        if ( able ) ans = max(ans, (int)member.size());
    }

    cout << ans << endl;
    return 0;
}

