#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n,x,y;
        cin >> n >> x >> y;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int total = 0;
        for (int i=0; i<n; i++) {
            if (arr[i]*x <= y) {
                total += arr[i]*x;
            } else {
                total += y;
            }
        }
        cout << total << endl;
    }
    return 0;
}