#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    for (int _=0; _<T; _++) {
        string num;
        cin >> num;
        int left_sum = 0;
        int right_sum = 0;
        for (int i=0; i<3; i++) {
            left_sum += num[i] -'0';
            right_sum += num[i+3] -'0';
        }
        (left_sum == right_sum) ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}