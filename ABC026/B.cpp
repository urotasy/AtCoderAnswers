#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> R(N);
    for ( int i = 0; i < N; i++ ) cin >> R[i];

    sort(R.begin(), R.end(), greater<int>());

    int ans_ = 0;
    for ( int i = 0; i < N; i++ ) {
        ans_ += (i % 2 == 0) ? R[i] * R[i] : -R[i] * R[i];
    }

    printf("%.7lf\n", ans_ * M_PI);
    return 0;
}
