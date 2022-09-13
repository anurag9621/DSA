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
int main(){
    struct Node *root = new Node(2);
    return 0;
}