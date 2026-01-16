#include <bits/stdc++.h>
using namespace std;

// Initialise the linked list node
class Node {
    public:
        int val;
        Node* next;
    // Constructor
    Node (int val) {
        this->val = val;
        this->next = nullptr;
    }
};

// insert at tail
void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

// print list
void print_list(Node* head) {
    while (head != nullptr) {
        cout << head->val << endl;
        head = head->next;
    }
}
int main() {

    Node* head = nullptr;
    Node* tail = nullptr;

    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int val;
        cin >> val;
        insert_at_tail(head, tail, val);
    }
    int fre[101] = {0};
    Node* temp = head;
    int v;
    bool is = false;
    while (temp != nullptr) {
        v = temp->val;
        temp = temp->next;
        fre[v]++;
        if (fre[v] > 1) {
            is = true;
        }
    }
    (is) ? cout << "YES" : cout << "NO";
    // print_list(head);
    return 0;
}