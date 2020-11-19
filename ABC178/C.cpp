#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9 + 7;

static long long calc_exp_mod (
    long long base,
    long long exponent)
{
    if ( exponent == 1 )
        return base;
    if ( exponent % 2 != 0 )
        return base * calc_exp_mod(base, exponent-1) % MOD;
    long long sqrt = calc_exp_mod(base, exponent/2);
    return (sqrt * sqrt) % MOD;
}

int main (void) {
    long long N;
    cin >> N;

    long long ans = calc_exp_mod(10, N) - 2 * calc_exp_mod(9, N) + calc_exp_mod(8, N);
    ans %= MOD;
    ans = (ans + MOD) % MOD;
    cout << ans << endl;
    return 0;
}
