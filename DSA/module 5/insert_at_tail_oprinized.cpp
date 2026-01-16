#include <bits/stdc++.h>
using namespace std;
// Initialise the linked list node
class Node
{
public:
    int val;
    Node *next;
    // Constructor
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};

// insert at head
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

// insert at any position
void insert_at_any_position(Node *&head, int index, int val)
{
    if (index == 0)
    {
        insert_at_head(head, val);
        return;
    }
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        if (temp == nullptr)
            return;
        temp = temp->next;
    }
    if (temp == nullptr)
        return;
    newnode->next = temp->next;
    temp->next = newnode;
}

// insert at tail
void insert_at_tail(Node *&head, Node *&tail, int val)
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

// print Linked list
void print_list(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
int main()
{

    Node* head = nullptr;
    Node* tail = nullptr;
    return 0;
}