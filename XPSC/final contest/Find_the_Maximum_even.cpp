#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<long long> vc(n);

    for (int i = 0; i < n; i++) {
        cin >> vc[i];
    }

    sort(vc.begin(), vc.end());
    long long ans = -1;

    for (int i = n - 1; i >= 0; i--) {
        if (vc[i] % 2 == 0) {
            ans = vc[i];
            break;
        }
    }
    if (n >= 2) {

        int cnt = 0;
        long long sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (vc[i] % 2 == 0) {
                sum += vc[i];
                cnt++;
                if (cnt == 2) break;
            }
        }
        if (cnt == 2)
            ans = max(ans, sum);

        cnt = 0;
        sum = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (vc[i] % 2 != 0) {
                sum += vc[i];
                cnt++;
                if (cnt == 2) break;
            }
        }
        if (cnt == 2)
            ans = max(ans, sum);
    }

    cout << ans;
    return 0;
}
