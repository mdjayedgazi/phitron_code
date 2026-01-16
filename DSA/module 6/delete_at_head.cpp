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

void print_list(Node* head) {
    if (head == nullptr) return;
    cout << head->val;
    if (head->next != nullptr) cout << endl;
    print_list(head->next);
}
void delete_at_head(Node* &head) {
    Node* DeleteNode = head;
    head = head->next;
    delete DeleteNode;
}
int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    while (cin >> val) {
        if (val == -1) break;
        insert_at_tail(head,tail,val);
    }
    // delete_at_head(head);

    print_list(head);
    return 0;
}