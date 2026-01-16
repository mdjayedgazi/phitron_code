#include <bits/stdc++.h>
using namespace std;

int main() {

    string str, word, x;
    getline(cin,str);

    cin >> x;
    int count = 0; 

    stringstream ss (str);
    
    while (ss >> word) {
        if (word == x) {
            count++;
        }    
    }
    cout << count;
    return 0;
}