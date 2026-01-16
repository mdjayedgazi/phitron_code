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

void sort_list (Node* head) {
    if (head == nullptr) return;
    for (Node* i= head; i->next!= nullptr;i = i->next) {
        for (Node* j= i->next; j != nullptr; j =  j->next) {
            if (i->val > j->val) swap(i->val, j->val);
        }
    }
}

void reverse_sort_list (Node* head) {
    if (head == nullptr) return;
    for (Node* i=head; i->next != nullptr; i=i->next) {
        for (Node* j=i->next; j != nullptr; j=j->next) {
            if (i->val < j->val) swap(i->val, j->val);
        }
    }
}

void print_list (Node* head) {
    if (head == nullptr) return;
    print_list(head->next); 
    cout << head->val << " ";
    // if (head->next != nullptr) cout << " ";
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    
    int val;
    while (cin >> val) {
        if (val == -1) {
            break;
        }
        insert_at_tail(head, tail, val);
    }
    // sort_list(head);
    print_list(head);
    return 0;
}