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

int main() {

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    

    Node* slow = head;
    Node* fast = head;
    
    bool is_cycle = false;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            is_cycle = true;
            break;
        }
    }

    (is_cycle) ? cout << "Cycle Detected" << endl : cout << "No Cycle" << endl;

    return 0;
}