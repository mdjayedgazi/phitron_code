#include <bits/stdc++.h>
using namespace std;

int main() {

    queue<int> q;
    int val;
    while (cin >> val && val != -1) {
        q.push(val);
    }
    cout << q.size() << endl;
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}