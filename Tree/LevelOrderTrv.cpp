#include <bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
class solution{
    public:
        vector<vector<int>> levelOrder(TreeNode *root){
            vector<vector<int>> ans;
            if(root ==NULL)
                return and;
            queue<TreeNode *> q;
            q.push(root);
            while(!q.empty()){
                int size = q.size();
                vector<int> level;
                
            }
        }
}



int main()
{


    return 0;
}