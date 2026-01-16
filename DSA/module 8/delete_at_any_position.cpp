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
        this->next = nullptr;
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

void delete_at_any_position(Node* &head, Node* &tail, int idx) {
    if (idx < 0) {
        cout << "Invalid index" << endl;
        return;
    }

    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    if (idx == 0) {
        delete_at_head(head, tail);
        return;
    }

    Node* temp = head;
    for (int i = 0; i < idx; i++) {
        if (temp == nullptr) {
            cout << "Invalid index" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Invalid index" << endl;
        return;
    }

    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }

    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    } else {
        tail = temp->prev;
    }
    delete temp;
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

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;

    int val;
    while (cin >> val) {
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    delete_at_any_position(head,tail, 4);
    print_forward(head);
    return 0;
}