#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int coun = 0;
        for (char c : s) {
            if (c == '1') {
                coun++;
            }
        }
        int ans = 0;
        for (char c : s) {
            if (c == '1') {
                ans += coun-1;
            } else {
                ans += coun+1;
            }
        }
        cout << ans << endl;

    }
    return 0;
}