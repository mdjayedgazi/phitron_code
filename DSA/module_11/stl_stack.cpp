#include <bits/stdc++.h>
using namespace std;

bool same (stack<int> st, stack<int> st2) {
    if (st.size() != st2.size()) return false;

    while (!st.empty()) {
        if(st.top() != st2.top()) {
            return false;
        }
        st.pop();
        st2.pop();
    }
    return true;
}

int main() {

    stack<int> st;
    stack<int> st2;
    int n,x;
    cin >> n;
    
    for (int i=0; i<n; i++) {
        int v;
        cin >> v;
        st.push(v);
    }
    cin >> x;
    for (int i=0; i<x; i++) {
        int v;
        cin >> v;
        st2.push(v);
    }
    bool yes = same(st,st2);
    cout << (yes ? "YES" : "NO");
    return 0;
}