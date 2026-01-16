#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n+1);
    for (int i=1; i<=n; i++) {
        cin >> arr[i];
    }
    vector<int> pe(n+1);
    for (int i=1; i<=n; i++) {
        pe[i] = pe[i-1] + arr[i];
    }
    for (int i=1; i<=n; i++) {
        cout << pe[i] << " " ;
    }
    return 0;
}