#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y,z;
    cin >> x >> y >> z;
    int em = y*z;
    if (em > x) cout << -1 << endl;
    else cout << x-em << endl;
    return 0;
}