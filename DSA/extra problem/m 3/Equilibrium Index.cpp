#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,i;
    cin >> n;
    // array
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    bool is_found = false;
    for (i=0; i<n; i++) {
        int lower_sum = 0, higher_sum = 0;
        for (int j=0; j<i; j++) {
            lower_sum += arr[j];
        }
        for (int j=i+1; j<n; j++) {
            higher_sum += arr[j];
        }
        if (lower_sum == higher_sum) {
            is_found = true;
            break;
        } else {

        }
    }
    (is_found) ? cout << i : cout << "no";
    return 0;
}