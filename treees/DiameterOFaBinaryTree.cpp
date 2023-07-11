#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
}
int maxDepth(TreeNode *root){
    if(root==NULL)return 0;
    int lh= maxDepth(root->left);
    int rh= maxDepth(root->right);
    return max(lh,rh)+1;
}
int diameter(TreeNode *root){
    if(root==NULL)return ;
    int lh= maxDepth(root->left);
    int rh= maxDepth(root->right);
    int maxi= max(maxi,lh+rh+1);
    int left= diameter(root->left);
    int right= diameter(root->right);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}