#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4, m = 5;
    int arr[6][6] = {0};
    int prefix[6][6] = {0};

    int sample[4][5] = {
        {3, 1, 4, 2, 8},
        {5, 6, 7, 3, 1},
        {9, 2, 3, 4, 6},
        {1, 8, 5, 9, 7}
    };

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            arr[i][j] = sample[i-1][j-1];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];

    auto query = [&](int r1, int c1, int r2, int c2){
        return prefix[r2][c2] - prefix[r1-1][c2] - prefix[r2][c1-1] + prefix[r1-1][c1-1];
    };

    cout << query(1,1,4,5) << "\n";
    cout << query(2,2,3,4) << "\n";
    cout << query(3,1,4,3) << "\n";

    return 0;
}
