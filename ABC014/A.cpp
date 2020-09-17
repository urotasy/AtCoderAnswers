#include <bits/stdc++.h>

using namespace std;

#if 1
int main (void) {
    int a, b;
    cin >> a >> b;

    /* a 以上の最小の b の倍数の個数が必要 */
    cout << ((a - 1) / b + 1) * b - a << endl;
    return 0;
}
#endif

#if 0
// 実行速度は遅い (制約上問題ない程度) がこちらのほうが分かりやすいか
int main (void) {
    int a, b;
    cin >> a >> b;

    int ans = 0;
    while ( (a + ans) % b != 0 ) ans++;

    cout << ans << endl;
    return 0;
}
#endif

