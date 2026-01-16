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

// Insert at tail 
void insert_at_tail (Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    tail->next= newnode;
    tail = newnode;
}

// print at linked list
void print_list (Node* head) {
    int count = 0;
    while (head != nullptr) {
        // cout << head->val << " ";
        count++;
        head = head->next;
    }
    cout << count;
}
int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int n;
    cin >> n;
    for (int i=0;i<n; i++) {
        int val;
        cin >> val; 
        insert_at_tail(head,tail,val);
    }
    print_list(head);
    return 0;
}