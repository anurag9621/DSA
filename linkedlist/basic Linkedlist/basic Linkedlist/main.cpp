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
void display( Node *p){
    while(p!=NULL){
        cout << p->data<<" ";
        p = p->next;
    }
    cout << endl;
}
void recDecplay(Node *p){
    if(p!=NULL){
        cout << p->data << " ";
        recDecplay(p->next);
    }
}
void reverseRecDisplay( Node *p){
    if(p!=0){
        reverseRecDisplay(p->next);
        cout << p->data << " ";
    }
}
int lengthOfLinkedlist(Node *p){
    int count = 0;
    while (p!=0){
        count++;
        p = p->next;
    }
    return count;
}
void sumOfLinkedList( Node *p){
    int sum=0;
    while(p!=0){
        sum=sum+p->data;
        p=p->next;
    }
    cout<<sum<<endl;
    
}
int recSumOfLinkedList(Node *p){
    if(p==0){
        return 0;
    }
    else
        return recSumOfLinkedList(p->next)+p->data;
}
void maxInLinkedList(Node *p){
    int max=INT_MIN;
    while(p!=0){
        if(max<p->data){
            max=p->data;
            p=p->next;
        }
        else{
            p=p->next;
        }
    }
    cout<<max<<endl;
}
int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7};
    create(A, 7);
    display(first);
    recDecplay(first);
    cout<<endl;
    reverseRecDisplay(first);
    cout<<endl;
    cout << lengthOfLinkedlist(first) << endl;
    sumOfLinkedList(first);
    cout<<recSumOfLinkedList(first)<<endl;
    maxInLinkedList(first);
    return 0;
}
