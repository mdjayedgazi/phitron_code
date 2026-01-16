#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    int grid[1000][1000];
    int prefix[1001][1001];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> grid[i][j];

    for (int i = 0; i <= N; i++)
        for (int j = 0; j <= M; j++)
            prefix[i][j] = 0;

    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= M; j++)
            prefix[i][j] = grid[i-1][j-1] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];

    for (int q = 0; q < Q; q++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        r1++; c1++; r2++; c2++;
        int sum = prefix[r2][c2] - prefix[r1-1][c2] - prefix[r2][c1-1] + prefix[r1-1][c1-1];
        cout << sum << endl;
    }
    return 0;
}
