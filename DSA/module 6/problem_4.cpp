#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

void print_list (Node* head) {
    while (head != nullptr)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

bool insert_at_any_position(Node* &head,
   Node* &tail, int index, int val)
{
    if (index < 0)
    {
        cout << "Invalid" << endl;
        return false;
    }
    if (index == 0)
    {
        insert_at_head(head, val);
        return true;
    }
    if (head == nullptr) {
        cout << "Invalid" << endl;
        return false;
    }
    Node* temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp->next == nullptr)
        {
            cout << "Invalid" << endl;
            return false;
        }
        temp = temp->next;
    }

    Node *newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
    if (newnode->next == nullptr) tail = newnode;
    return true;
}

void insert_at_tail(Node *&head,
     Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == nullptr)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

int main()
{

    Node *head = nullptr;
    Node *tail = nullptr;
    int val;
    while (cin >> val)
    {
        if (val == -1)
            break;
        insert_at_tail(head, tail, val);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int indx, valx;
        cin >> indx >> valx;
        
        bool flg = insert_at_any_position(head,tail,indx, valx);
        if (flg) print_list(head);
    }
    return 0;
}