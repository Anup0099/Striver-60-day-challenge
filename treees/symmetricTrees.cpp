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
    if (root1->val == root2->val)
        return true;
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
int main() {}