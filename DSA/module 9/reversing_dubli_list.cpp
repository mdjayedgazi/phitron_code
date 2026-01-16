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

void revers_list (Node* head, Node* tail) {
    if (!head || !tail) return;
    if (head == tail || head->prev == tail) return;
    swap(head->val, tail->val);
    revers_list(head->next,tail->prev);
}

void reverse (Node* head, Node* tail) {
    for (Node* i=head, *j=tail; i!=j && i->prev !=j; i=i->next, j=j->prev) {
        swap(i->val,j->val);
    }
}

void reverse_dubli_list(Node* head, Node* tail) {
    if (!head || !tail) return;
    while (head != tail && head->prev != tail) {
        swap(head->val, tail->val);
        head = head->next;
        tail =tail->prev;
    }
}

void print_list (Node* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head,tail,val);
    } 
    
    print_list(head);
    reverse_dubli_list(head,tail);
    print_list(head);
    return 0;
}