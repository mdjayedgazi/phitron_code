#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vc(n+1);
        for (int i=0; i<=n; i++) {
            cin >> vc[i];
        }
        int mn = INT_MAX;
        for (int i=0; i<n; i++) {
            int lg = max(vc[i],vc[i+1]);
            mn = min(mn,lg);
        }
        cout << mn << endl;
    }
    return 0;
}