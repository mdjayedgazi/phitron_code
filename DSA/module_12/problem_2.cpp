#include <bits/stdc++.h>
using namespace std;

bool both_same(stack<int> st, queue<int> q) {
    if (st.size() != q.size()) return false;

    while (!st.empty()) {
        if (st.top() != q.front()) {
            return false;
        }
        st.pop();
        q.pop();
    }
    return true;
}

int main() {

    stack<int> st;
    queue<int> q;

    int n,m;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (int i=0; i<m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    bool same = both_same(st,q);
    cout << (same ? "YES" : "NO");
    return 0;
}