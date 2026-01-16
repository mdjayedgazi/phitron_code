#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    for (int i=0; i<t; i++) {
        string str;
        cin >> str;
        
        if (str.size() <= 10) {
            cout << str << endl;
        } else if (str.size() > 10) {
            cout << *str.begin() << str.size() -2 << *(str.end()-1) << endl;
        }
    }
    return 0;
}