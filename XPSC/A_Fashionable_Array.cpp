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
        sort(arr,arr+n);
        int mn = arr[0] , mx = arr[n-1]; 
        if (mn%2 == mx%2) cout << 0 << endl;
        else {
            int i = 0;
            int lcoun = 0;
            int rcoun = 0;
            while (arr[i]%2 != mx%2) {
                i++;
                lcoun++;
            }
            int j = n-1;
            while (mn%2 != arr[j]%2) {
                j--;
                rcoun++;
            }
            int size = min(lcoun,rcoun);
            cout << size << endl;
        }
    }
    return 0;
}