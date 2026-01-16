#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for (auto& str : s) {
        str = tolower(str);
    } 
    cout << s;
    return 0;
}