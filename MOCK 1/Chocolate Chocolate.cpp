#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int chocolate = n / 5;
        int wrappers = chocolate;
        while (wrappers >= 3) {
            int extra = wrappers / 3;
            chocolate += extra;
            wrappers = extra + (wrappers % 3);
        }
        cout << chocolate << endl;
    }
    return 0;
}
