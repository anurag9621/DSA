#include <iostream>
using namespace std;

struct Node
{
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
    else if(pos>0){
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

void dublicateDelete(){
    Node *p = first;
    Node *q = p->next;
    while(q!=NULL){
        if(p->data!=q->data){
         
            q = q->next;
            p = p->next;
        }
        else{
            p->next = q->next;
            delete q;
            q = p->next;
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
    insert(0, 1);
    insert(1, 2);
    insert(2, 3);
    insert(3, 3);
    insert(4, 3);
    display(first);
    dublicateDelete();
    display(first);
}