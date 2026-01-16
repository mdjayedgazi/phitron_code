#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0;
        int free[26] = {0};
        for (char ch : s) {
            free[ch - 'a']++;
        }
        for (int i=0; i<26; i++) {
            if (free[i]%2 != 0) {
                count++;
            }
        }
        cout << max(0,count-1) << endl;
    }
    return 0;
}