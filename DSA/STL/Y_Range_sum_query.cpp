#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,q;
    cin >> n >> q;
    int l,r;
    vector<int> v(n+1);
    for (int i=1; i<=n; i++) {
        cin >> v[i];
    }
    vector<int> pe(n+1);
    for (int i=1; i<=n; i++) {
        pe[i] = pe[i-1] + v[i];
    }
    int sum = 0;
    while (q--) {
        cin >> l >> r;
        if (l<=1) {
            sum = pe[r];
        } else {
            sum = pe[r] - pe[l-1];
        }
        cout << sum << endl;
    }
    return 0;
}