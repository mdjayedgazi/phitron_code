#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
        Node* prev;
    
    Node (int val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class Stack {
    Node* head = nullptr;
    Node* tail = nullptr;
    int sz = 0;
    public:
        void push (int val) {
            sz++;
            Node* newnode = new Node(val);
            if (head == nullptr) {
                head = tail = newnode;
                return;
            }
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        void pop() {
            sz--;
            if (tail == nullptr) return; 
            Node* dtail = tail;
            tail = tail->prev;
            delete dtail;
            if (tail == nullptr){
                head = nullptr;
                return;
            }
            tail->next = nullptr;
        }
        int top() {
            return tail->val;
        }
        int size() {
            return sz;
        }
        bool empty() {
            return head == nullptr;
        }

};
int main() {

    Stack st;
    int val;
    while (cin >> val && val != -1) {
        st.push(val);
    }
    cout << st.size() << endl;
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}