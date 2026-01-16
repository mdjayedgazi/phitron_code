#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    for (int _=0; _<T; _++) {

        string s,t;
        cin >> s >> t;
        int size = max({s.length(),t.length()});
        for (int i=0; i<size; i++) {
            if (i <s.length()) {
                cout << s[i];
            } if (i <t.length()) {
                cout << t[i];
            }
        }
        cout << endl;
    }
    return 0;
}