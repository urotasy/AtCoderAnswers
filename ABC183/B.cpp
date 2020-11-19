#include <bits/stdc++.h>

using namespace std;

int main (void) {
    long long sx, sy, gx, gy;
    cin >> sx >> sy >> gx >> gy;

    double ans = (double)(sy * (gx - sx)) /  (sy + gy) + sx;
    printf("%.10lf\n", ans);
    return 0;
}
