#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int n, k;
    cin >> n >> k;
    vector<int> score_sum(n, 0);
    vector<int> score_sum_sort(n, 0);
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < 3; j++ )
        {
            int p;
            cin >> p;
            score_sum.at(i) += p;
        }
        score_sum_sort.at(i) = score_sum.at(i);
    }

    /* calc kth score */
    sort(score_sum_sort.begin(), score_sum_sort.end(), greater<int>{});
    int kth_score = score_sum_sort.at(k-1);

    for ( int i = 0; i < n; i++ )
    {
        if ( score_sum.at(i) >= kth_score - 300 ) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
