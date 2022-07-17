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
void deletingOfFirstNode()
{
    Node *p = first;
    first = first->next;
    delete p;
}
void deletingAtAny(int pos){
 
    if(pos==0){
        Node *p = first;
        first = first->next;
        delete p;
    }
    else{
        Node *p = first;
        Node *q = p->next;
        for (int i = 1; i < pos && q; i++)
        {
            q = q->next;
            p = p->next;
        }
        if (q->next == NULL)
        {
            p->next = NULL;
            delete q;
        }
        else{
            p->next = q->next;
            delete q;
        }
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
    insert(0, 4);
    insert(1, 5);
    insert(2, 6);
    insert(3, 7);

    //deletingOfFirstNode();
    deletingAtAny(2);
    display(first);
}