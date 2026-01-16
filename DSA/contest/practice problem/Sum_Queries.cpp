#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,q;
    cin >> n;
    
    vector<long long> vc (n+1);
    for (int i=1; i<=n; i++) cin >> vc[i];
    vector<long long> pre (n+1);
    for (int i=1; i<=n; i++) pre[i] = pre[i-1] + vc[i];

    cin >> q;
    while(q--) {
        int l,r;
        cin >> l >> r;
        long long sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }
    return 0;
}