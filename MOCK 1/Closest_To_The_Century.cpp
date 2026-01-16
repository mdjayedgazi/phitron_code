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
        int big = INT_MIN;
        for (int i=0; i<n; i++) {
            big = max(arr[i],big);
        }
        cout << big << endl;
    }
    return 0;
}