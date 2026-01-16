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

void insert_at_tail (Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val, siz=0;
    while (cin >> val) {
        siz++;
        insert_at_tail(head, tail, val);
    }
    int mid = siz / 2;
    Node* temp = head;
    if (siz % 2 == 0) {
        for (int i=0; i<mid-1; i++) {
            temp = temp->next;
        }
        cout << temp->val << " " << temp->next->val;
    } else {
        for (int i=0; i<mid; i++) {
            temp = temp->next;
        }
        cout << temp->val;
    }
    return 0;
}