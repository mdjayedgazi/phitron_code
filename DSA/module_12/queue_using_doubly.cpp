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

class Queue {
    Node* head = nullptr;
    Node* tail = nullptr;
    int sz = 0;
    public:
        void push(int val) {
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
            Node* dle = head;
            head = head->next;
            delete dle;
            if (head == nullptr) {
                tail = nullptr;
                return;
            }
            head->prev = nullptr;
        }
        int front() {
            return head->val;
        }
        int back() {
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