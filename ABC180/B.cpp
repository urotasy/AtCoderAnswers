#include <bits/stdc++.h>

using namespace std;

static long long calc_manhattan_dist (vector<int> v) {
    long long dist = 0;
    for ( auto itr : v )
        dist += abs(itr);
    return dist;
}

static double calc_euclidean_dist (vector<int> v) {
    long long dist = 0;
    for ( auto itr : v )
        dist += (long long)itr * itr;
    return sqrt(dist);
}

static int calc_chebyshev_dist (vector<int> v) {
    int dist = INT_MIN;
    for ( auto itr : v )
        dist = max(dist, abs(itr));
    return dist;
}

int main (void) {
    int N;
    cin >> N;
    vector<int> x(N);
    for ( int i = 0; i < N; i++ ) cin >> x[i];

    printf("%lld\n%.10lf\n%d\n",
           calc_manhattan_dist(x),
           calc_euclidean_dist(x),
           calc_chebyshev_dist(x));
    return 0;
}
