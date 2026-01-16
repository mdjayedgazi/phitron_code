#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    int fre[26] = {0};

    for (char ch : str) {
        fre[ch - 'a']++;
    }

    for (int i=0; i<26; i++) {
        if (fre[i] > 0) {
            cout << char('a'+i) << " : " << fre[i] << endl;
        }
    }
    return 0;
}