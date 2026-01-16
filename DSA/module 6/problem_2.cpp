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

void insetr_at_tail (Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void reverse_print_list (Node* head) {
    if (head == nullptr) return;
    reverse_print_list(head->next); 
    cout << head->val << " ";
}
int main() {

    Node* head = nullptr;
    Node* tail = nullptr;

    int val;
    while (cin >> val) {
        if (val == -1) break;
        insetr_at_tail(head,tail,val);
    }
    reverse_print_list(head);
    return 0;
}