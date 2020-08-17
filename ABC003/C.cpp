#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N, K;
    cin >> N >> K;
    vector<int> R(N);
    for ( int i = 0; i < N; i++ ) cin >> R.at(i);

    /* 見る講座動画はレートが大きいほうから K 個 */
    vector<int> L(K);
    sort(R.begin(), R.end(), greater<int>());
    for ( int i = 0; i < K; i++ ) L.at(i) = R.at(i);

    /* 見る順番はレートが小さいほうから */
    sort(L.begin(), L.end());

    double ans = 0;
    for ( int i = 0; i < K; i++ ) ans = (ans + L.at(i)) / 2;
    printf("%.7lf\n", ans);

    return 0;
}
