#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    int odd = 0;
    int even = 0;
    int n = str.length();
    for (int i=n-1; i>=0; i--) {
        int di = str[i] - '0';
        int pos = n-i;
        if (pos % 2 != 0) {
            odd += di;
        } else {
            even += di;
        }
    }
    int ans = abs(odd-even);
    (ans % 11 == 0) ? cout << "YES" : cout << "NO";
    return 0;
}