#include <bits/stdc++.h>

using namespace std;

int main (void) {
    long long N;
    cin >> N;

    vector<long long> ans_v;
    for ( long long i = 1; i * i <= N; i++ ) {
        if ( N % i == 0 ) {
            ans_v.push_back(i);
            ans_v.push_back(N/i);
        }
    }
    sort(ans_v.begin(), ans_v.end());
    ans_v.erase(unique(ans_v.begin(), ans_v.end()), ans_v.end());

    for ( auto itr : ans_v ) cout << itr << endl;
    return 0;
}
