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

int count (Node* head) {
    int coun = 0;
    while (head != nullptr) {
        coun++;
        head = head->next;
    }
    return coun;
}
void print_list (Node* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) {
            cout << "->";
        }
        head = head->next;
    }
}
int main() {

    Node* head = nullptr;
    Node* tail = nullptr;
    int val,v,cc=0;
    while (cin >> val) {
        cc++;
        insert_at_tail(head,tail,val);
    }
    bool is = false;
    int fre [101] = {0};
    Node* temp = head;
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