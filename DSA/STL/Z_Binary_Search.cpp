#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,q,x;
    cin >> n >> q;
    vector<int> v(n);
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    // while (q--) {
    //     int x;
    //     cin >> x;
    //     int st = 0, end = n-1;
    //     bool is_found = false;
    //     while (st <= end) {
    //         int mid = st+(end-st)/2;
    //         if (x == v[mid]) {
    //             is_found = true;
    //             break;
    //         } else if (x < v[mid]) {
    //             end = mid-1;
    //         } else {
    //             st = mid+1;
    //         }
    //     }
    //     (is_found) ? cout << "found\n" : cout << "not found\n";
    // }

    while (q--) {
        int x;
        cin >> x;
        auto is = binary_search(v.begin(),v.end(),x);
        (is) ? cout << "found\n" : cout << "not found\n";
    }
    return 0;
}