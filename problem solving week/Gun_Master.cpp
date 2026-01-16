#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n,d;
        cin >> n >> d;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        int change = 0;
        char gun = 'c';
        for (int i=0; i<n; i++) {
            if (arr[i] > d && gun == 'c') {
                gun = 'l';
                change++;
            } else if (arr[i] <= d && gun == 'l') {
                gun = 'c';
                change++;
            }
        }
        cout << change << endl;
    }
    return 0;
}   
