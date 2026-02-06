#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int lift1 = a-1;
        int lift2 = abs(b-c) + c-1;
        if (lift1 < lift2) {
            cout << 1 << endl;
        } else if (lift1 > lift2) {
            cout << 2 << endl;
        } else if (lift1 == lift2) {
            cout << 3 << endl;
        }
        
    }
    return 0;
}