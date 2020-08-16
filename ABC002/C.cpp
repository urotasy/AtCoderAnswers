#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int Ax, Ay, Bx, By, Cx, Cy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;

    /* 点 A を原点とした場合の相対座標 rB, rC を計算する */
    int rBx = Bx - Ax;
    int rBy = By - Ay;
    int rCx = Cx - Ax;
    int rCy = Cy - Ay;

    float area = abs(rBx * rCy - rCx * rBy) / 2.0;
    printf("%.3f\n", area);

    return 0;
}
