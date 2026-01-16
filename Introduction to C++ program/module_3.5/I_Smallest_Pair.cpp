#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int _=0; _<t; _++) {
        int smol = INT_MAX;
        int ans;
        int n;
        cin >> n;
        int arr[n+1];
        for (int i=1; i<=n; i++) {
            cin >> arr[i];
        }
        for (int i=1; i<n; i++) {
            for (int j=i+1; j<=n; j++) {
                ans = arr[i] + arr[j] + (j - i);
                smol = min(smol,ans);
        }
            }
        cout << smol << endl;
    }
    return 0;
}