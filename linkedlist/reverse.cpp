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
void reverse()
{
    Node *p, *q, *r;
    p = first;
    q = NULL;
    r = NULL;
    while (p != NULL)
    {
        q = r;
        r = p;
        p = p->next;
        r->next = q;
    }
    first = r;
}
int getNthFromLast(Node *first, int n)
{
    // Your code here
    Node *c;
    c = first;
    for (int i = 0; i < n-1; i++)
    {
        c = c->next;
    }
    if (c)
    {
        return c->data;
    }
    else
    {
        return -1;
    }
}
void recReverse(Node *q,Node *p){
    if(p!=NULL){
        recReverse(p, p->next);
        p->next = q;
    }
    else{
        first = q;
    }
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
    insert(4, 50);
    insert(5, 60);
    insert(6, 70);
    insert(7, 80);
    insert(8, 90);
    insert(9, 100);
    insert(10, 110);
    insert(11, 120);

    // display(first);
     reverse();
    // display(first);
    // recReverse(NULL, first);
    // display(first);
   cout<<  getNthFromLast(first, 3)<<" ";

}