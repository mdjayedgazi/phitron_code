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
void insert_at_head(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_any_position(Node* &head, Node* &tail, int index, int val) {
    if (index < 0) {
        cout << "index is invalid" << endl;
        return;
    }
    if (index == 0) {
        insert_at_head(head, tail, val);
        return;
    }
    if (head == nullptr) {
        cout << "Invalid Head" << endl;
        return;
    }
    Node* temp = head;
    for (int i=0; i<index-1; i++) {
        if (temp->next == nullptr) {
            cout << "index is Invalid" << endl;
            return;
        }
        temp = temp->next;
    }

    Node* newnode = new Node(val);
    newnode->next = temp->next;
    newnode->prev = temp;
    if (temp->next != nullptr) {
        temp->next->prev = newnode;
    } else {
        tail = newnode;
    }
    temp->next = newnode;
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
    cout << endl;
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    while (cin >> val) {
        if (val == -1) break;
        insert_at_tail(head,tail,val);
    }
    insert_at_any_position(head,tail,2,60);
    print_forward(head);
    print_backward(tail);
    return 0;
}