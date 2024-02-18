#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    TreeNode *left;
    TreeNode *right;
    int val;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
int solve(TreeNode *root)
{
    int sum = 0;
    if (root == NULL)
    {
        return sum;
    }
    if (root->left != NULL)
    {
        root->left->val = root->val * 10 + root->left->val;
    }
    if (root->right != NULL)
    {
        root->right->val = root->val * 10 + root->right->val;
    }
    if (root->left == NULL and root->right == NULL)
    {
        return root->val;
    }
    int left = solve(root->left);
    int right = solve(root->right);
    return left + right;
}
int sumNumbers(TreeNode *root)
{
    if (root == NULL)
        return 0;
    return solve(root);
}
int main()
{
    // 4,9,0,5,1
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(9);
    root->right = new TreeNode(0);
    root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(1);
    cout << sumNumbers(root);
    return 0;
}