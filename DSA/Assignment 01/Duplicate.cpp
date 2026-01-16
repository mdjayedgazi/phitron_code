#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> vc(n);
    for (int i = 0; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end());
    bool is = false;
    for (int i=0; i<n-1; i++) {
        if (vc[i] == vc[i+1]) {
            is = true;
        }
    }
    (is) ? cout << "YES" : cout << "NO";
    return 0;
}
