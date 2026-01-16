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

void delete_at_tail(Node* head, Node* &tail) {
    while (head->next->next != nullptr) {
        head = head->next;
    }
    Node* deletenode = tail;
    tail = head;
    tail->next = nullptr;
    delete deletenode;
}

void print_list (Node* head) {
    if (head == nullptr) return;
    cout << head->val;
    if (head->next != nullptr) cout << " ";
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
        insert_at_tail(head,tail,val);
    }
    cout << "Tail befor delete : " << tail->val << endl;
    delete_at_tail(head, tail);
    print_list(head);
    cout << endl;
    cout << "Tail after delete : " << tail->val << endl;
    return 0;
}