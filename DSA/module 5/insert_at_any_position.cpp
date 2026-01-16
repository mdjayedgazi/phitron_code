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

// Insert at Linked list head
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

// Insert at any position
void insert_at_any_pos(Node *head, int indx, int val)
{
    Node *newnode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// Insert at Linked list tail
void insert_at_tail(Node *head, int val)
{
    Node *newnode = new Node(val);
    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

// Print Linked List function
void print_linked_list(Node *head)
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

    Node *head = new Node(10);
    insert_at_tail(head, 20);
    insert_at_tail(head, 30);
    insert_at_tail(head, 40);
    insert_at_any_pos(head, 2, 300);
    print_linked_list(head);
    return 0;
}