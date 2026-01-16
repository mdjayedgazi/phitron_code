#include <bits/stdc++.h>
using namespace std;

int main() {

    string str, rw;
    getline(cin,str);
    bool spas = true;
    stringstream s(str);
    while (s >> rw) {
        if (!spas) cout << " ";
        reverse(rw.begin(), rw.end());
        cout << rw;
        spas = false;
    }
    return 0;
}