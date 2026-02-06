#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;
    
    Node (int val) {
        this->val = val;
        this->next = nullptr;
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
            tail = newnode;
        }
        void pop() {
            sz--;
            Node* del = head;
            head = head->next;
            delete del;
            if (head == nullptr) {
                tail = nullptr;
            }
        }

        int fornt() {
            return head->val;
        }

        int size() {
            return sz;
        }
        bool empty() {
            return head == nullptr;
        }
        int back() {
            return tail->val;
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
        cout << q.fornt() << " ";
        q.pop();
    }
    return 0;
}