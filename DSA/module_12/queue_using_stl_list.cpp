#include <bits/stdc++.h>
using namespace std;

class Queue {
    list<int> l;
    public:
        void push(int val) {
            l.push_back(val);
        }
        void pop() {
            if(!l.empty())
                l.pop_front();
        }
        int size() {
            return l.size();
        }
        int front() {
            if (l.empty()) return -1;
            return l.front();
        }
        int back() {
            return l.back();
        }
        bool empty() {
            return l.empty();
        }
};
int main() {

    Queue q;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}