#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> A(N);
    for ( int i = 0; i < N; i++ ) cin >> A[i];

    long long ans = 0;
    long long cur = 0;
    long long sum = 0;
    long long most_right = 0;
    for ( int i = 0; i < N; i++ ) {
        sum += A[i];
        most_right = max(most_right, sum);
        ans = max(ans, cur + most_right);
        cur += sum;
    }

    cout << ans << endl;
    return 0;
}
