#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
} *first = NULL;
void insert(int pos,int x){
    Node *p, *t;
    if(pos==0){
        t = new Node;
        t->data = x;
        t->next=first;
        first = t;
    }
    else if(pos>0){
        p = first;
        for (int i = 0; i < pos - 1 && p;i++){
            p = p->next;
        }
        if(p){
            t = new Node;
            t->next = p->next;
            t->data = x;
            p->next = t;

        }
    }
}
void display(Node *p){
    while(p!=NULL){
        cout << p->data << " ";
        p = p -> next;
    }
    cout << endl;
}
void mackLoop(int pos)
{
    Node *p, *k, *j;

    k = first;

    while (k != NULL)
    {
        j = k;
        k = k->next;
    }
    p = first;
    for (int i = 0; i < pos - 1 && p; i++)
    {
        p = p->next;
    }
    j->next = p->next;
}
void removeLoop(){
    Node *p,*q;
    p = first;
    q = first;
    do{
        q = q->next;
        p = p->next->next;
    } while (p != q);

    Node  *u;
    u = first;
    while(u->next!=p->next){
        
        u = u->next;

        p = p->next;
    }
    p->next = NULL;
}

int main(){
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

    display(first);
    mackLoop(0);
    removeLoop();
        display(first);
}