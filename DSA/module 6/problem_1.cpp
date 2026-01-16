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

void print_list (Node* head) {
    if (head == nullptr) return;
    cout << head->val;
    if (head->next != nullptr) cout << " ";
    print_list(head->next); 
}

int main() {

    Node* head_1 = nullptr;
    Node* tail_1 = nullptr;
    int val_1,siz_1=0;
    while (cin >> val_1) {
        if(val_1 == -1) break;
        siz_1++;
        insert_at_tail(head_1,tail_1,val_1);
    }
    Node* head_2 = nullptr;
    Node* tail_2 = nullptr;
    int val_2,siz_2=0;
    while (cin >> val_2) {
        if(val_2 == -1) break;
        siz_2++;
        insert_at_tail(head_2,tail_2,val_2);
    }
    (siz_1 == siz_2) ? cout << "YES" : cout << "NO";
    return 0;
}