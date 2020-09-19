#include <bits/stdc++.h>

using namespace std;

static bool has_bug_by_dfs (int val, vector<vector<int>> &select, int n_q, int n_s, int q_idx) {
    /* すべての質問に答え終わり、値が 0 ならばバグる */
    if ( q_idx == n_q ) {
        if ( val == 0 ) return true;
        else            return false;
    }

    for ( int s = 0; s < n_s; s++ ) {
        int new_val = val ^ select[q_idx][s];
        /* バグが発生するか判定するだけなので、ひとつ見つかったら終わり */
        if ( has_bug_by_dfs(new_val, select, n_q, n_s, q_idx + 1) )
            return true;
    }
    /* どの選択肢を選んだ先でもバグが発生しなかった */
    return false;
}

int main (void) {
    int N, K;
    cin >> N >> K;
    vector<vector<int>> T(N, vector<int>(K));
    for ( int i = 0; i < N; i++ ) {
        for ( int j = 0; j < K; j++ )
            cin >> T[i][j];
    }

    /* 深さ優先探索ですべてのパターンを試す */
    if ( has_bug_by_dfs(0, T, N, K, 0) )
        cout << "Found" << endl;
    else
        cout << "Nothing" << endl;
    return 0;
}
