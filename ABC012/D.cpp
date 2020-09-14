#include <bits/stdc++.h>

using namespace std;

/* 加算しても INT_MAX を超えず、かつ max(t) * max(N) よりも大きい数値 */
#define TIME_MAX (300000000)

int main (void) {
    int N, M;
    cin >> N >> M;

    /* すべての2地点間の距離 */
    vector<vector<int>> time(N, vector<int>(N, TIME_MAX));

    for ( int i = 0; i < N; i++ ) time[i][i] = 0;

    for ( int i = 0; i < M; i++ ) {
        int a, b, t;
        cin >> a >> b >> t;
        a--; b--;
        /* a <-> b へはバス一本で t 分で移動できる */
        time[a][b] = t;
        time[b][a] = t;
    }

    /* Warshall-Froyd Algorithm ですべての2地点間の最短移動時間を求める */
    for ( int mid = 0; mid < N; mid++ ) {
        /* 各 mid 番目のバス停を経由して start -> dest の移動時間を求める */
        for ( int start = 0; start < N; start++ ) {
            for ( int dest = 0; dest < N; dest++ ) {
                time[start][dest] = min(time[start][dest],
                                        time[start][mid] + time[mid][dest]);
                time[dest][start] = time[start][dest];
            }
        }
    }

    /* 最も遠いバス停までの移動時間が最短の場所を自宅とする */
    int ans_time = INT_MAX;
    for ( int home = 0; home < N; home++ ) {
        int max_time = 0; /* 最も遠いバス停までの移動時間 */
        for (int company = 0; company < N; company++ ) {
            max_time = max(max_time, time[home][company]);
        }
        ans_time = min(ans_time, max_time);
    }

    cout << ans_time << endl;
    return 0;
}
