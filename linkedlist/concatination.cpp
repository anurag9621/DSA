#include <iostream>
using namespace std;
 
struct Node{
    int data;
    Node *next;

} *first = NULL;

void insert(int pos,int x){
    Node *t, *p;
    if(pos==0){
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if(pos>){
        p = first;
        for (int i = 0; i < pos - 1 && p;i++){
            p = p->next;
        }
        if(p){
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}
void
void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}