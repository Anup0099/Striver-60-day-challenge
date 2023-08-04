#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;Node *right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
int maxDepth(Node* root){
    if(root==NULL)return 0;
    int left = maxDepth(root->left);
    int right= maxDepth(root->right);
    return 1+ max(left+right);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}