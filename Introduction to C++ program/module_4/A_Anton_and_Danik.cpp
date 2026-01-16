#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    char ch[n];
    for (int i=0; i<n; i++) {
        cin >> ch[i];
    }
    int A = 0; 
    int D = 0;
    for (int i=0; i<n; i++) {
        if (ch[i] == 'A') {
            A++;
        } else {
            D++;
        }
    }
    if (A > D) cout << "Anton";
    else if (A < D) cout << "Danik";
    else cout << "Friendship";

    return 0;
}