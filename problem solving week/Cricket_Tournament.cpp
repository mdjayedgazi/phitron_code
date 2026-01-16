#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    int n,m;
    while (T--) {
        cin >> n >> m;
        if (n > m) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}