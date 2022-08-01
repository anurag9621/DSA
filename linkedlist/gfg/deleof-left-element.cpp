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
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void deleonright(){
    Node *p, *q;
    p = first;
    while(p!=NULL&&p->next!=NULL){
        q = p;
        
        if (p->data < p->next->data)
        {

            p = p->next;
            
            
        }
        p = p->next;
    }
}

int main(){
    insert(0, 10);
    insert(1, 20);
    insert(2, 10);
    insert(3, 40);
    insert(4, 30);
    insert(5, 60);
    insert(6, 40);
    insert(7, 80);
    deleonright();

    display(first);
}