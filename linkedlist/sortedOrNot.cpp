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
void sorderOrNot()
{
    Node *p, *q;

    p = first;
    q = p->next;
    int r = 1;
    while (q != NULL)
    {
        if(p->data>q->data)
        {
            r = 0;
            break;
        }
        q = q->next;
        p = p->next;

    }
    if(r){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }
}
int main(){
    insert(0, 1);
    insert(1, 2);
    insert(2, 3);
    insert(3, 4);
    sorderOrNot();
}