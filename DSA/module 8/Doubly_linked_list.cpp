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

// void insert_at_tail (Node* &head, Node* &tail, int val) {
//     Node* newnode = new Node(val);
//     if (head == nullptr) {
//         head = tail = newnode;
//         return;
//     }
//     tail->next = newnode;
//     tail = newnode;
// }

void print_forward(Node* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) {
            cout << " ";
        }
        head = head->next;
    }
}

void print_backward(Node* tail) {
    while (tail != nullptr) {
        cout << tail->val;
        if (tail->prev != nullptr) cout << " ";
        tail = tail->prev;
    }
}
int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    print_forward(head);
    cout << endl;
    print_backward(tail);
    return 0;
}