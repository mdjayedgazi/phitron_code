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

// INSERT AT HEAD
// void insert_at_head(Node*& head, int val) {
//     Node* newnode = new Node(val);
//     newnode->next = head;
//     head = newnode;
// }

// INSERT AT TAIL
void insert_at_tail(Node *&head, int val)
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

// PRINT THE LINKED LIST
void print_linked_list(Node *head)
{
    while (head != nullptr)
    {
        cout << head->val << endl;
        head = head->next;
    }
}
int main()
{

    Node *head = new Node(10);
    insert_at_tail(head, 40);
    print_linked_list(head);
    return 0;
}