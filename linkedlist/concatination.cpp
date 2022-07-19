#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

} *first = NULL, *head = NULL;

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
void insert2(int pos, int x)
{
    Node *t, *p;
    if (pos == 0)
    {
        t = new Node;
        t->data = x;
        t->next = head;
        head = t;
    }
    else if (pos > 0)
    {
        p = head;
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

void concatination()
{
    Node *p;

    p = first;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = head;
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
    insert(2, 30);
    insert(3, 40);

    insert2(0, 20);
    insert2(1, 30);
    insert2(2, 40);
    insert2(3, 50);

    display(first);
    display(head);
    concatination();
    display(first);
}