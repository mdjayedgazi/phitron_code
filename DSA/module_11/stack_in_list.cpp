#include <bits/stdc++.h>
using namespace std;

class Stack {
    list<int> l;
    public:
        void push(int val) {
            l.push_back(val);
        }
        void pop() {
            if(!l.empty())
                l.pop_back();
        }
        int top() {
            if(l.empty()) return -1;
            return l.back(); 
        }
        int size() {
            return l.size();
        }
        bool empty() {
            return l.empty();
        }
};
int main() {

    Stack st;
    int val;
    while (cin >> val && val != -1) {
        st.push(val);
    }  
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}