#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cin >> str;
    for (int i=0; i<str.length(); i++) {
        
        if (str.substr(i,5) == "EGYPT") {
            cout << " ";
            i+=4;
        } else {
            cout << str[i];
            }
        
    }
    return 0;
}