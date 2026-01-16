#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

void print_list(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_at_head(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_head (Node* &head, Node* &tail) {
    Node* DeleteNode = head;
    head = head->next;
    delete DeleteNode;
    if (head == nullptr) tail = nullptr;
}

void delete_at_any_pos(Node*& head, Node*& tail, int index) {
    if (head == nullptr) return;

    if (index == 0) {
        delete_head(head, tail);
        return;
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; i++) {
        if (temp->next == nullptr) return;
        temp = temp->next;
    }

    if (temp->next == nullptr) return;

    Node* deletenode = temp->next;
    temp->next = temp->next->next;
    if (deletenode == tail) tail = temp;
    delete deletenode;  
}

int main() {
    int q;
    cin >> q;

    Node* head = nullptr;
    Node* tail = nullptr;

    while (q--) {
        int x, val;
        cin >> x >> val;

        if (x == 0) {
            insert_at_head(head, tail, val);
        }
        else if (x == 1) {
            insert_at_tail(head, tail, val);
        }
        else if (x == 2) {
            delete_at_any_pos(head, tail, val);
        }

        print_list(head);
    }
    return 0;
}
