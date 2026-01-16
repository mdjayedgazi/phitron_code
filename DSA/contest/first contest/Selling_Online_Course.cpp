#include <bits/stdc++.h>
using namespace std;

int main() {

    long long x;
    cin >> x;

    if (x == 0) {
        cout << -1;
        return 0;
    };
    double per = 0;
    per += x * 20 / 100.0;
    cout << ceil(100/per);
    return 0;
}