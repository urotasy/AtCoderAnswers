#include <bits/stdc++.h>

using namespace std;

/* 上下左右への移動を実現するための配列 */
vector<int> mx = {0, 0, -1, 1};
vector<int> my = {1, -1, 0, 0};

int main (void) {
    int R, C, sy, sx, gy, gx;
    cin >> R >> C >> sy >> sx >> gy >> gx;
    sy--; sx--; gy--; gx--;
    vector<string> c(R);
    for ( int i = 0; i < R; i++ ) cin >> c.at(i);

    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));

    /* スタート地点からの距離を保持する */
    vector<vector<int>> dist(R, vector<int>(C, -1));
    dist.at(sy).at(sx) = 0;
    while ( !q.empty() ) {
        pair<int, int> p = q.front(); q.pop();
        int cx = p.first;
        int cy = p.second;
        int d = dist.at(cy).at(cx) + 1;

        /* 上下左右に移動する */
        for ( int i = 0; i < 4; i++ ) {
            int nx = cx + mx.at(i);
            int ny = cy + my.at(i);
            /* 領域範囲外へは移動できない */
            if ( nx < 0 || C <= nx || ny < 0 || R <= ny ) continue;
            /* 壁へは移動できない */
            if ( c.at(ny).at(nx) == '#' ) continue;
            /* 移動済みならスキップ */
            if ( dist.at(ny).at(nx) != -1 ) continue;
            /* 距離を格納する */
            dist.at(ny).at(nx) = d;
            /* queue に積む */
            q.push(make_pair(nx, ny));
        }
    }

    cout << dist.at(gy).at(gx) << endl;
    return 0;
}
