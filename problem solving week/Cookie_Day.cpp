#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int mn = INT_MAX;
        for (int i=0; i<n; i++) {
            if (arr[i] >= k) {
                mn = min(arr[i]%k,mn); 
            }
        }
            if (mn == INT_MAX) {
                cout << "-1" << endl;
            } else {
                cout << mn << endl;
            }
    }
    return 0;
}