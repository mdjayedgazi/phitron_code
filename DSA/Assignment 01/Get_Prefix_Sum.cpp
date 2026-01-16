#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<long long> vc (n+1);
    for (int i=1; i<=n; i++) cin >> vc[i];

    vector<long long> pre (n+1);
    for (int i=1; i<=n; i++) pre[i] = pre[i-1] + vc[i];
        
    for (int i=n; i>0; i--) {
        cout << pre[i] << " ";
    }
    return 0;
}