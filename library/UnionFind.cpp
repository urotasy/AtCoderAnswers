#include <bits/stdc++.h>

/* UnionFind Library
 *   例題として ABC157 D問題を解いている */

using namespace std;

struct UnionFind {
    /* data
     *   子なら親の ID
     *   根なら -1 * size */
    vector<int> d;

    /* constructer
     *   最初は全員根として扱う -> 全員 size 1 */
    UnionFind (int n = 0): d(n, -1) {}

    /* 木構造の根の頂点番号を返す
     *   最後の return 部分を `return find(d[x])` とするとメモ化なし
     *   `d[x] =` を加えることで、二回目以降は根までたどる必要がなくなる */
    int find (int x) {
        if ( d[x] < 0 )
            return x;
        return d[x] = find(d[x]);
    }

    /* 木構造同士をくっつける (== 根同士をくっつける)
     *   小さい方を大きい方の根の子要素とする
     *   根が同じなら何もせずに false を返す */
    bool unite (int x, int y) {
        /* 両方の根を見つける */
        x = find(x);
        y = find(y);
        if ( x == y )
            return false;
        /* size が x > y にする (d は -1 * size) */
        if ( d[x] > d[y] )
            swap(x, y);
        /* x の子要素に y が増える */
        d[x] += d[y];
        /* y の根は x となる */
        d[y] = x;
        return true;
    }

    bool is_same (int x, int y) {
        return find(x) == find(y);
    }

    int size (int x) {
        return -1 * d[find(x)];
    }
};

int main (void) {
    int N, M, K;
    cin >> N >> M >> K;

    UnionFind uf(N);
    vector<int> friends(N, 0);
    vector<vector<int>> blocks(N);
    int a, b;

    /* 友達 */
    for ( int i=0; i<M; i++ ) {
        cin >> a >> b;
        a--; b--;
        friends.at(a)++;
        friends.at(b)++;
        uf.unite(a, b);
    }
    /* ブロック */
    for ( int i=0; i<K; i++ ) {
        cin >> a >> b;
        a--; b--;
        blocks.at(a).push_back(b);
        blocks.at(b).push_back(a);
    }

    int ans;
    for ( int i=0; i<N; i++ ) {
        /* 自分を除いた数 */
        ans = uf.size(i) - 1;
        /* 直接の友人を除く */
        ans -= friends.at(i);
        /* ブロック関係を除く */
        for ( auto itr : blocks.at(i) ) {
            if ( uf.is_same(i, itr) )
                ans--;
        }
        cout << ans;
        if ( i != N - 1 )
            cout << " ";
    }
    cout << endl;

    return 0;
}
