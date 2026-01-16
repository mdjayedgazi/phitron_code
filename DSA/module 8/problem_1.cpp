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

void compaer(Node* head_1, int siz_1, Node* head_2, int siz_2) {
    bool is_same = true;
    if (siz_1 == siz_2) {
        while (head_1 != nullptr) {
            if (head_1->val != head_2->val) {
                is_same = false;
                break;
            }
            head_1 = head_1->next;
            head_2 = head_2->next;
        }
    } else {
        cout << "NO" << endl;
        return;
    }
    (is_same) ? cout << "YES" : cout << "NO";
}

int main() {

    Node* head_1 = nullptr;
    Node* tail_1 = nullptr;
    int count_1 = 0;
    int val_1;
    while (cin >> val_1) {
        if (val_1 == -1) break;
        count_1++;
        insert_at_tail(head_1,tail_1,val_1);
    }
    
    Node* head_2 = nullptr;
    Node* tail_2 = nullptr;
    int count_2 = 0;
    int val_2;
    while (cin >> val_2) {
        if (val_2 == -1) break;
        count_2++;
        insert_at_tail(head_2,tail_2,val_2);
    }
    compaer(head_1,count_1,head_2,count_2);
    return 0;
}