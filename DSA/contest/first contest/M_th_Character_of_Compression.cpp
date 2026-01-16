#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int m;
    cin >> s >> m;

    int n = s.size();
    int index = 0;

    for (int i = 0; i < n; ++i) {
        char c = s[i];
        int rep = 1;

        if (i + 1 < n && isdigit(s[i + 1])) {
            rep = s[i + 1] - '0'; 
            i++; 
        }

        if (index + rep >= m) {
            cout << c << endl;
            return 0;
        }

        index += rep;
    }

    return 0;
}
