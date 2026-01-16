#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();
    vector<string> vc(n);
    for (int i=0; i<n; i++) {
        getline(cin , vc[i]);
    }
    for (auto s : vc) cout << s << endl;
    return 0;
}