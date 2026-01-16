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

void delete_at_head(Node* &head, Node* &tail) {
    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    Node* denode = head;
    if (head->next != nullptr) {
        head = head->next;
        head->prev = nullptr;
    } else {
        head = tail = nullptr;
    }
    delete denode;
}

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_forward(Node* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " ";
        head = head->next;
    }
    cout << endl;
}

void print_backward(Node* tail) {
    while (tail != nullptr) {
        cout << tail->val;
        if (tail->prev != nullptr) cout << " ";
        tail = tail->prev;
    }
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;

    int val;
    while (cin >> val) {
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    delete_at_head(head,tail);
    print_forward(head);
    print_backward(tail);
    return 0;
}