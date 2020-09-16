#include <bits/stdc++.h>

using namespace std;

int main (void) {
    char X;
    /* `cin >>` だと空白文字を読み取ってしまうので `cin.get()` */
    cin.get(X);

    cout << X - 'A' + 1 << endl;
    return 0;
}
