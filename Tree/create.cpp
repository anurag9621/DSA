#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node (int val){
        data = val;
        left = right = NULL;
    }
};
void preOrder(Node){
    if(Node ==NULL){
        return;
    }
    cout << Node->data;
    preOrder(Node->left);
    preOrder(Node->right);
}
void inOrder(Node){
    if(Node==NULL){
        return;
    }
    inOrder(Node->left);
    cout << Node->data;
    inOrder(Node->right);
}
int main(){
    struct Node *root = new Node(2);
    return 0;
}