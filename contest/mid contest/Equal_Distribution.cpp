#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long int k;
    cin >> n >> k;

    long int quotient = k / n;
    long int remainder = k % n;

    cout << quotient << " " << remainder;
    return 0;
}