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

void is_sort (Node* head) {
    bool is = true;
    if (head == nullptr || head->next == nullptr) cout << "YES";
    
    Node* temp = head;
    while (temp->next != nullptr) {
        if (temp->val > temp->next->val) {
            is = false;
        }
        temp = temp->next;
    }
    (is) ? cout << "YES" : cout << "NO";
}
int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    while (cin >> val) {
        insert_at_tail(head, tail, val);
    }
    is_sort(head);
    return 0;
}