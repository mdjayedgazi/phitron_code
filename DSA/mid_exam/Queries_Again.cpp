#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head = nullptr;
    Node* tail = nullptr;
    int size = 0;

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            cout << "Invalid\n";
            return;
        }
        Node* newNode = new Node(val);
        if (index == 0) {
            if (!head) {
                head = tail = newNode;
            } else {
                newNode->next = head;
                head->prev = newNode;
                head = newNode;
            }
        } else if (index == size) {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        } else {
            Node* cur = head;
            for (int i = 0; i < index; i++) cur = cur->next;
            Node* prevNode = cur->prev;
            prevNode->next = newNode;
            newNode->prev = prevNode;
            newNode->next = cur;
            cur->prev = newNode;
        }
        size++;
        printForward();
        printBackward();
    }

    void printForward() {
        Node* cur = head;
        cout << "L -> ";
        while (cur) {
            cout << cur->val << " ";
            cur = cur->next;
        }
        cout << "\n";
    }

    void printBackward() {
        Node* cur = tail;
        cout << "R -> ";
        while (cur) {
            cout << cur->val << " ";
            cur = cur->prev;
        }
        cout << "\n";
    }
};

int main() {
    DoublyLinkedList list;
    int Q;
    cin >> Q;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        list.addAtIndex(X, V);
    }
    return 0;
}
