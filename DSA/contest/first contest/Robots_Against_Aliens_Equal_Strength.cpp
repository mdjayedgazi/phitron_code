#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> row(n);
    long long target = LLONG_MIN; 
    bool found_target = false;
    bool has_zero = false;

    for (int i = 0; i < n; i++) {
        long long sum = 0;
        bool row_zero = false;
        for (int j = 0; j < m; j++) {
            long long x;
            cin >> x;
            if (x == 0) row_zero = true;
            sum += x;
        }

        if (row_zero) has_zero = true;
        else {
            if (!found_target) {
                target = sum;
                found_target = true;
            } else if (sum != target) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}
