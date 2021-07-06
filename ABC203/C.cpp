#include <bits/stdc++.h>

using namespace std;

int main (void) {
    long long N, K;
    cin >> N >> K;
    vector<long long> A(N), B(N);
    for ( long long i = 0; i < N; i++ ) {
        cin >> A.at(i) >> B.at(i);
    }

    long long place = 0;
    long long money = K;

    for ( long long i = 0; i < N; i++ ) {
        long long rest_money = money - (A.at(i) - place);
        if ( rest_money <= 0 ) {
            break;
        }
        money = rest_money + B.at(i);
        place = A.at(i);
    }
    place += money;

    cout << place << endl;
    return 0;
}
