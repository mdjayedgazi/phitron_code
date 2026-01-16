#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> arr (n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    // prefix sum
    vector<long long> ps (n);
    ps[0] = arr[0];
    for (int i=1; i<n; i++) {
        ps[i] = ps[i-1] + arr[i];
    }
    // suffix sum
    vector<long long> ss (n);
    ss[n-1] = arr[n-1];
    for (int i=n-2; i>=0; i--) {
        ss[i] = ss[i+1] + arr[i];
    }
    for (int i=0; i<n; i++) {
        if (ps[i] == ss[i]) {
            cout << i;
            break;
        }
    }
    return 0;
}