#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    for (int _=0; _<T; _++) {
        int n;
        cin >> n;
        int arr[n];
        int even = 0;
        int odd = 0;

        if (n % 2 == 0) {

            for (int i=0; i<n; i++) {
            cin >> arr[i];
            }

            int siz = n / 2;

            for (int i=0; i<n; i++) {
                if (arr[i] % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
            int ans = abs(even - siz);
            cout << ans << endl;

        } else {
            for (int i=0; i<n; i++) {
            cin >> arr[i];
            }
            cout << "-1" << endl;
        }
    }
    return 0;
}