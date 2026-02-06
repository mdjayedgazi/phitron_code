#include <bits/stdc++.h>
using namespace std;

class Stack {
    list<int> l;

public:
    void push(int x) {
        l.push_back(x);
    }

    void pop() {
        l.pop_back();
    }

    int top() {
        return l.back();
    }

    bool empty() {
        return l.empty();
    }

    int size() {
        return l.size();
    }
};

class Queue {
    list<int> l;

public:
    void push(int x) {
        l.push_back(x);
    }

    void pop() {
        l.pop_front();
    }

    int front() {
        return l.front();
    }

    bool empty() {
        return l.empty();
    }

    int size() {
        return l.size();
    }
};

// Same logic as original
bool both_same(Stack st, Queue q) {
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
    Stack st;
    Queue q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << (both_same(st, q) ? "YES" : "NO");
    return 0;
}
