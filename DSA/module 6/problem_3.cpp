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

int Max_val (Node* head) {
    int max = INT_MIN;
    while (head != nullptr) {
        if (head->val > max) max = head->val;
        head = head->next;
    }
    return max;
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    while (cin >> val) {
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    cout << Max_val(head);
    return 0;
}