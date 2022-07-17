#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *first = NULL;

void insert(int pos, int x)
{
    Node *t, *p;
    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (pos > 0)
    {
        p = first;
        for (int i = 0; i < pos - 1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}
void insertAtLast(int x)
{
    Node *t = new Node;
    Node *last;
    last = first;
    while (last->next != NULL)
    {
        last = last->next;
    }
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}
void insertInSortedLinklist(int x)
{
    Node *t = new Node;
    t->data = x;
    Node *p, *q;
    p = first;
    q = NULL;
    while (p && p->data < x)
    {
        
        q = p;
        p = p->next;
    }
    q->next = t;
    t->next = p;
}
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main()
{
    insert(0, 10);
    insert(1, 20);
    insert(1, 30);
    insertAtLast(40);
    insertInSortedLinklist(35);
    display(first);
}