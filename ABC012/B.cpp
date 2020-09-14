#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int N;
    cin >> N;

    int sec = N, min, hour;

    hour = sec / 3600;
    sec -= 3600 * hour;

    min = sec / 60;
    sec -= 60 * min;

    printf("%02d:%02d:%02d\n", hour, min, sec);
    return 0;
}
