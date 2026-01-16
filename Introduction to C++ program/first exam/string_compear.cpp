#include <bits/stdc++.h>
using namespace std;

int main() {

    string a = "kpple";
    string b = "banana";
    bool is_Smaller = lexicographical_compare(a.begin(), a.end(), b.begin(), b.end());
    if (is_Smaller) {
        cout << a << " comes first\n";
    } else {
        cout << b << " comes first\n";
    }
    return 0;
}