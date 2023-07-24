#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};
TreeNode *lca(TreeNode *root,TreeNode *p,TreeNode *q){
    if(root==NULL || root==p || root==q)return root;
    TreeNode *left=lca(root->left,p,q);
    TreeNode *right=lca(root->right,p,q);
    if(left==NULL)return right;
    if(right==NULL)return left;
    return root;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}