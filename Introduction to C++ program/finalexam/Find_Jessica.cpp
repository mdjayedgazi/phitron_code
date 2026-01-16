#include <bits/stdc++.h>
using namespace std;

int main() {

    string str, w;
    getline(cin, str);
    bool is_yes = false;
    stringstream s (str);
    while (s >> w) {
        if (w == "Jessica") {
            is_yes = true;
            break;
        }
    }
    (is_yes) ? cout << "YES" : cout << "NO";
    return 0;
}