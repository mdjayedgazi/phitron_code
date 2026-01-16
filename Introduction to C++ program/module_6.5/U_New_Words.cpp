#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;

    int fre[26] = {0};

    for (int i=0; i<str.length(); i++) {
        auto ch = str[i];
        ch = tolower(ch);
        fre[ch-'a']++;
    }
    
    cout << min({fre['e'-'a'],fre['g'-'a'],fre['y'-'a'],fre['y'-'a'],fre['p'-'a'],fre['t'-'a']});
    return 0;
}