#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i=0; i<n; i++) {
            sum += arr[i];
        }
        int req = 50*(n+1);
        int need = req - sum;

        if (need > 100) cout << -1 << endl;
        else if (need < 0) cout << 0 << endl;
        else cout << need << endl;
    }
    return 0;
}