#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int A, B;
    cin >> A >> B;

    int max_follow = 2 * A + 100;
    cout << max_follow - B << endl;

    return 0;
}
