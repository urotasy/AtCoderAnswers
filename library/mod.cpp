#include <bits/stdc++.h>

using namespace std;

//struct ModInt {
//    long long mod;
//    long long devisor;
//
//    /* constructer */
//    ModInt (long long init = 0, long long devisor = 1e9 + 7)
//        : mod(init)
//        , devisor(devisor)
//    {
//        if ( mod > devisor ) mod %= devisor;
//        printf("val = %lld, mod = %lld\n", init, mod);
//    }
//
//    void add (long long n) {
//        if ( n > devisor ) n %= devisor;
//        mod += n;
//        if ( mod > devisor ) mod -= devisor;
//    }
//
//    void 
//};

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

static long long calc_comb_mod (
    long long n,
    long long k)
{
    long long x = 1;
    long long y = 1;

    for ( int i=0; i<k; i++ ) {
        x *= n - i;
        y *= i + 1;
        x %= MOD;
        y %= MOD;
    }
    y = calc_exp_mod(y, MOD-2);
    return (x * y) % MOD;
}

int main (void) {
    //ModInt mi;
    return 0;
}

