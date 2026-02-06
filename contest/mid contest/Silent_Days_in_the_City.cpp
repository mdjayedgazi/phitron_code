#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n;
    vector<long long> arr(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<int> prefix(n + 1, 0);
    for (int i = 2; i <= n - 1; i++) {
        if (arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
            prefix[i] = 1;
    }

    for (int i = 1; i <= n; i++) {
        prefix[i] += prefix[i - 1];
    }

    cin >> q;
    while (q--) {
        int L, R;
        cin >> L >> R;

        int left = max(L, 2);
        int right = min(R, n - 1);

        int count = 0;
        if (left <= right) {
            count = prefix[right] - prefix[left - 1];
        }

        cout << count << endl;
    }

    return 0;
}
