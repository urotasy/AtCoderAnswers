#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;
    vector<int> array(1000002, 0);

    for ( int i = 0; i < N; i++ ) {
        int A, B;
        cin >> A >> B;
        array.at(A)++;
        array.at(B+1)--;
    }

    long long ans = 0;
    long long cum_sum = 0;
    for ( int i = 0; i < 1000001; i++ ) {
        cum_sum += array.at(i);
        ans += cum_sum * i;
    }

    cout << ans << endl;
    return 0;
}
