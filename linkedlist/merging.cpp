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
void merging()
{
    Node *a, *b;

    if (first->data < head->data)
    {
        a = first;
        b = first;
        first = first->next;
        b->next = NULL;
    }
    else
    {
        a = head;
        b = head;
        head = head->next;
        b->next = NULL;
    }
    while (first != NULL && head != NULL){
        if(first->data<head->data){
            b->next = first;
            b = first;
            first = first->next;
            b->next = NULL;
        }
        else{
            b->next = head;
            b = head;
            head = head->next;
            b->next = NULL;
        }
    }
    if(first!=NULL){
        b->next = first;
    }
    else{
        b->next = head;
    }
    first = a;
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

    insert2(0, 15);
    insert2(1, 25);
    insert2(2, 35);
    insert2(3, 50);

    display(first);
    display(head);
    merging();
    display(first);
}