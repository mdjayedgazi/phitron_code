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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == nullptr) {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void print_list(Node* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " ";
        head = head->next;
    }
    cout << endl;
}

void reverse_list(Node* &head, Node* temp, Node* &tail) {
    if (temp->next == nullptr) {
        head = temp;
        return;
    }
    reverse_list(head,temp->next,tail);
    temp->next->next = temp;
    temp->next = nullptr;
    tail = temp;
}
 
int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val;
    while (cin >> val) {
        if (val == -1) break;
        insert_at_tail(head,tail,val);
    }
    reverse_list(head,head,tail);
    print_list(head);
    cout << head->val << endl;
    cout << tail->val << endl;
    return 0;
}