#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    for (int i=0; i<n; i++) {
        cin >> A[i];
    }
    for (int i=0; i<n; i++) {
        cin >> B[i];
    }
    vector<int>c;
    c = B;
    for (int v : c) cout << v << " ";
    c = A;
    for (int v : c) cout << v << " ";
    return 0;
}