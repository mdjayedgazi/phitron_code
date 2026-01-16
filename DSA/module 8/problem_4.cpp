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

bool insert_at_any_position(Node* &head, Node* &tail, int index, int val) {
    if (index < 0) {
        cout << "Invalid" << endl;
        return false;
    }
    if (index == 0) {
        insert_at_head(head, tail, val);
        return true;
    }
    if (head == nullptr) {
        cout << "Invalid" << endl;
        return false;
    }
    Node* temp = head;
    for (int i=0; i<index-1; i++) {
        if (temp->next == nullptr) {
            cout << "Invalid" << endl;
            return false;
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
    return true;
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
    int n;
    cin >> n;
    int i, val;
    while (n--) {
        cin >> i >> val;
        bool ok = insert_at_any_position(head,tail,i,val);
        if (ok) {
            print_forward(head);
            print_backward(tail);
        }
    }
    return 0;
}