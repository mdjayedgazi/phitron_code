#include <bits/stdc++.h>
using namespace std;

int main() {

    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i=0; i<n; i++) {
    //     cin >> arr[i];
    // }
    // reverse(arr, arr+n);
    // for (auto a : arr) {
    //     cout << a << " ";
    // }
    string str;
    cin >> str;

    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}