#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,q,x;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    cin >> q;
    while (q--) {
        cin >> x;
        int st = 0 , end = n-1;
        bool is_found = false;
        while (st <= end) {
            int mid = st + (end - st) / 2 ;
            if (x == arr[mid]) {
                is_found = true;
                break;
            } else if (x < arr[mid]) {
                end = mid-1;
            } else {
                st = mid + 1;
            }
        }
        (is_found) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}