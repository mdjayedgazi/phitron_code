#include <bits/stdc++.h>
using namespace std;

int main() {

    int x,y;
    cin >> x >> y;
    int sum = x + y;
    long long int mul = 1LL* x * y;
    int sub = x - y;

    cout << x << " + " << y << " = " << sum << endl; 
    cout << x  << " * " << y << " = " << mul << endl; 
    cout << x << " - " << y << " = " << sub << endl; 
    return 0;
}