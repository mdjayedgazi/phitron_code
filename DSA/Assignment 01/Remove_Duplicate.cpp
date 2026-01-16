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

void remove_duplicates(Node*& head, Node*& tail)
{
    for (Node* i = head; i != nullptr; i = i->next)
    {
        Node* j = i;
        while (j->next != nullptr)
        {
            if (i->val == j->next->val)
            {
                Node* temp = j->next;
                j->next = j->next->next;

                // if (temp == tail) tail = j;

                delete temp;
            }
            else
            {
                j = j->next;
            }
        }
    }
}


void print_list(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node *head = nullptr;
    Node *tail = nullptr;

    int val;
    while (cin >> val && val != -1)
    {
        insert_at_tail(head, tail, val);
    }

    remove_duplicates(head, tail);
    print_list(head);

    return 0;
}
