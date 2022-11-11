#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    
};
struct Node* newNode(int value){
    Node *n = new Node;
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{


    return 0;
}