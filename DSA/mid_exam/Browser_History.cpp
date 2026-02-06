#include <bits/stdc++.h>
using namespace std;

class node {
public:
    string val;
    node* next;
    node* prev;
    node(string val) {
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class browserhistory {
    node* head = nullptr;
    node* tail = nullptr;
    node* cur = nullptr;
    unordered_map<string, node*> mp;
public:
    void insert_at_tail(string val) {
        node* newnode = new node(val);
        mp[val] = newnode;
        if (!head) {
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }

    void visit(string val) {
        if (mp.count(val)) {
            cur = mp[val];
            cout << cur->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }

    void next() {
        if (cur && cur->next) {
            cur = cur->next;
            cout << cur->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }

    void prev() {
        if (cur && cur->prev) {
            cur = cur->prev;
            cout << cur->val << endl;
        } else {
            cout << "Not Available" << endl;
        }
    }
};

int main() {
    browserhistory bh;
    string val;

    while (cin >> val && val != "end") {
        bh.insert_at_tail(val);
    }

    int q;
    cin >> q;
    cin.ignore();

    for (int i = 0; i < q; i++) {
        string cmd;
        cin >> cmd;

        if (cmd == "visit") {
            string addr;
            cin >> addr;
            bh.visit(addr);
        } else if (cmd == "next") {
            bh.next();
        } else if (cmd == "prev") {
            bh.prev();
        }
    }
    return 0;
}
