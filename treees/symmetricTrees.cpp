#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
bool solve(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL and root2 == NULL)
        return true;
    if (root1->val != root2->val)
        return false;
    if (root1 == NULL or root2 == NULL)
        return false;
    bool left = solve(root1->left, root2->right);
    bool right = solve(root1->right, root2->left);
    return left and right;
}
bool isSymmetric(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    return solve(root->left, root->right);
}
bool isSameTree(TreeNode *p, TreeNode *q)
{
    if(p==NULL and q==NULL)return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    cout << isSymmetric(root) << endl;
    return 0;
}