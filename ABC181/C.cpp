#include <bits/stdc++.h>

using namespace std;

static bool on_one_line (int x1, int y1, int x2, int y2, int x3, int y3) {
    int dx1 = x2 - x1;
    int dy1 = y2 - y1;
    int dx2 = x3 - x1;
    int dy2 = y3 - y1;

    return dx1 * dy2 == dy1 * dx2;
}

int main (void) {
    int N;
    cin >> N;
    vector<int> x(N);
    vector<int> y(N);
    for ( int i = 0; i < N; i++ ) {
        cin >> x.at(i) >> y.at(i);
    }

    for ( int i = 0; i < N; i++ ) {
        for ( int j = i + 1; j < N; j++ ) {
            for ( int k = j + 1; k < N; k++ ) {
                if ( on_one_line(x[i], y[i], x[j], y[j], x[k], y[k]) ) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
