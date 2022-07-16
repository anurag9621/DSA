#include<iostream>
using namespace std;


struct Node{
    int data;
    struct Node *next;
} * first=NULL;
void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    last = first;
    for (i = 1; i < n;i++){
        t = new Node;
        t->data = A[i];
        t->next=NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p){
    while(p!=NULL){
        cout << p->data<<" ";
        p = p->next;
    }
    cout << endl;
}
void recDecplay(struct Node *p){
    if(p!=NULL){
        cout << p->data << " ";
        recDecplay(p->next);
    }
}
void reverseRecDisplay(struct Node *p){
    if(p!=0){
        reverseRecDisplay(p->next);
        cout << p->data << " ";
    }
}
int lengthOfLinkedlist(struct Node *p){
    int count = 0;
    while (p!=0){
        count++;
        p = p->next;
    }
    return count;
}
int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    create(A, 7);
    display(first);
    recDecplay(first);
    reverseRecDisplay(first);
    cout << lengthOfLinkedlist(first) << endl;
    return 0;
}