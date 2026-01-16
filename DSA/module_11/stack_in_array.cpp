#include <bits/stdc++.h>
using namespace std;

class Stack {

    vector<int> v;
    public:
        void push(int val) {
            v.push_back(val);
        }

        void pop() {
            if (!v.empty())
                v.pop_back();
        }

        int top() {
            if(v.empty()) return -1;
            return v.back();
        }

        int size() {
            return v.size();
        }

        bool empty() {
            return v.empty();
        }

};
int main() {

    Stack st;
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty()) {
        cout <<st.top() << " ";
        st.pop();
    }
    return 0;
}