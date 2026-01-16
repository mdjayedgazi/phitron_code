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

void palindrome(Node* head, Node* tail) {
    if (head == nullptr) cout << "YES" << endl;
    bool is_palindrome = true;
    while (head != tail && head->prev != tail) {
        if (head->val != tail->val) {
            is_palindrome = false;
        }
        head = head->next;
        tail = tail->prev;
    }
    (is_palindrome) ? cout << "YES" : cout << "NO"; 
}

int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    while (cin >> val) {
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }
    palindrome(head, tail);
    return 0;
}