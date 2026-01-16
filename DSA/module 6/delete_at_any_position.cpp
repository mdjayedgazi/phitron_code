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

void delete_head (Node* &head) {
    Node* DeleteNode = head;
    head = head->next;
    delete DeleteNode;
}

void delete_any_position (Node* &head, int index) {
    if (index < 0) {
        cout << "Invalid Index" << "(" << index << ")" << endl;
        return;
    }
    if (head == nullptr) {
        cout << "Index out of bounds (" << index << ")" << endl;
        return;
    }
    if (index == 0) {
        delete_head(head);
        return;
    }
    Node* temp = head;
    for (int i=0; i<index -1; i++) {
        if (temp->next == nullptr) {
            cout << "Index out of bounds ! " << "("<< index << ")" << endl;
            return;
        } 
        temp = temp->next;
    }
    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
}

void print_list (Node* head) {
    if (head == nullptr) {
        return;
    }
    cout << head->val;
    if (head->next != nullptr) cout << endl;
    print_list(head->next);
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
    delete_any_position(head,5);
    print_list(head);
    return 0;
}