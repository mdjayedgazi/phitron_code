#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i=0; i<n; i++)
            cin >> arr[i];
        int large = INT_MIN;
        for (int i=0; i<n; i++) {
            large = max(arr[i],large);
        }
        cout << large << endl;
    }
    return 0;
}