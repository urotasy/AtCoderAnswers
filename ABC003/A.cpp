#include <bits/stdc++.h>

using namespace std;

int main (void) {
  int N;
  cin >> N;

  int sum = 0;
  for ( int i = 1; i <= N; i++ ) {
    sum += i * 10000;
  }
  printf("%.7lf\n", (double)sum / N);

  return 0;
}

