#include <bits/stdc++.h>

using namespace std;

/*
 * エラトステネスの篩
 *   n 以下の素数を bitset で返す
 */
static bitset<100000 + 1> sieve_of_eratosthenes (long long n) {
    bitset<100000 + 1> prime(0);

    for ( long long i = 2; i <= n; i++ )
        prime.set(i);
    for ( long long i = 2; i <= n; i++ ) {
        if ( prime[i] ) {
            for ( long long j = i * 2; j <= n; j += i ) {
                prime.reset(j);
            }
        }
    }

    return prime;
}

/*
 * 素数判定
 */
static bool is_prime (long long n) {
    if ( n == 1 )
        return false;
    for ( long long i = 2; i * i <= n; i++ ) {
        if ( n % i == 0 )
            return false;
    }
    return true;
}

/*
 * 素因数とその個数の map を返す
 */
static map<long long, long long> calc_prime_factor (long long n) {
    map<long long, long long> prime_factor;

    for ( long long i = 2; i * i <= n; i++ ) {
        while ( n % i == 0 ) {
            prime_factor[i]++;
            n /= i;
        }
    }
    if ( n != 1 )
        prime_factor[n]++;

    return prime_factor;
}

/*
 * ある数の約数の個数
 *   素因数分解を利用して個数のみを高速に求める
 */
static long long calc_n_devisor (long long n) {
    long long n_devisor = 1;
    map<long long, long long> prime_factor;

    prime_factor = calc_prime_factor(n);
    for ( auto itr : prime_factor )
        n_devisor *= (itr.second + 1);

    return n_devisor;
}

/*
 * n以下のすべての数の約数の個数
 *   O(N*log(N)) で求める
 */
static vector<long long> calc_n_devisor_array (long long n) {
    vector<long long> n_devisor(n+1, 0);

    for ( int i = 1; i <= n; i++ ) {
        for ( int j = i; j <= n; j += i ) {
            n_devisor.at(j)++;
        }
    }

    return n_devisor;
}

/*
 * 約数の列挙
 *   返り値の約数はソートされていないことに注意
 */
static vector<long long> enum_devisor (long long n) {
    vector<long long> devisor;
    long long quotient;

    for ( long long i = 1; i * i <= n; i++ ) {
        if ( n % i == 0 ) {
            devisor.push_back(i);
            quotient = n / i;
            if ( quotient != i )
                devisor.push_back(quotient);
        }
    }

    return devisor;
}

int main (void) {
    return 0;
}
