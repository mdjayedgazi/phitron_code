#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n,q;
        cin >> n >> q;

        vector<long long> a(n), b(n);

        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];

        for (int i=0; i<=n; i++) {
            a[i] = max(a[i], b[i]);
        }

        for (int i=n-2; i>=0; i--) {
            a[i] = max(a[i], a[i+1]);
        }

        for (int i=0; i<n; i++) {
            a[i+1] += a[i];
        }

        while (q--) {
            int l,r;
            cin >> l >> r;
            l--;r--;
            long long ans = (l > 0) ? (a[r] - a[l-1]) : a[r];
            cout << ans << " ";
        }
        cout << endl ;
    }
    return 0;
}