#include <bits/stdc++.h>
using namespace std;

int main() {

    long long int a,b,c;
    char ch,op;
    cin >> a >> ch >> b >> op >> c;

    long long int sum = 1LL* a + b;
    long long int sub = 1LL* a - b;
    long long int mul = 1LL* a * b;

    if (ch == '+') {
        if (sum == c) {
            cout << "Yes";
        } else {
            cout << sum;
        }
    } else if (ch == '-') {
        if (sub == c) {
            cout << "Yes";
        } else {
            cout << sub;
        }
    } else if (ch == '*') {
        if (mul == c) {
            cout << "Yes";
        } else {
            cout << mul;
        }
    }
    
    return 0;
}