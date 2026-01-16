#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    for (int _=0; _<T; _++) {
        int sum=0;
        int n;
        cin >> n;
        string str;
        cin >> str;
        int fre[26] = {0};
        for (auto ch : str) {
            if (fre[ch - 'A'] == 0) {
                sum += 2;
                fre[ch - 'A']++;
            } else {
                sum++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}