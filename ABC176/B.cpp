#include <bits/stdc++.h>

using namespace std;

int main (void) {
    string N;
    cin >> N;

    long long sum = 0;
    for ( size_t i = 0; i < N.size(); i++ ) {
        sum += N[i] - '0';
    }

    if ( sum % 9 == 0 ) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
