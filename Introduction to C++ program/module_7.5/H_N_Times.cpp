#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    for (int _=0; _<T; _++) {
        int n;
        char ch;
        cin >> n >> ch;
        bool is_spas = true;
        for (int i=0; i<n; i++) {
            if (!is_spas) cout << " ";
            cout << ch ;
            is_spas = false;
        }
        cout << "\n";
    }
    return 0;
}