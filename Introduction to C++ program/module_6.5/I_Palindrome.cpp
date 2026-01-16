#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    auto r = str.begin();
    auto l = str.end() -1;
    bool is_palindrome = true;
    while (r < l) {
        if (*r != *l) {
            is_palindrome = false;
            break;
        }
        if (!is_palindrome) break;
        r++;
        l--;
    }
    (!is_palindrome) ? cout << "NO" : cout << "YES";
    return 0;
}