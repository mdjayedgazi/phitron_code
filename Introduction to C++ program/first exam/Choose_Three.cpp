#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int _=0; _<t; _++) {

        int n,s;
        cin >> n >> s;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        bool is_yes = false;
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                for (int k=j+1; k<n; k++) {
                    if (s == (arr[i] + arr[j] + arr[k])) {
                        is_yes = true;
                        break;
                    }
                }
                if(is_yes) break;
            }
            if(is_yes) break;
        }
        (is_yes) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}