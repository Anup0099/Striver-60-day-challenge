#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL){};
};
int maxDiff = -1;
void findMaxUtil(TreeNode *root, TreeNode *child)
{
    if (root == NULL || child == NULL)
        return;
    maxDiff = max(maxDiff, abs(root->val - child->val));
    findMaxUtil(root, child->left);
    findMaxUtil(root, child->right);
}
// void findmax(TreeNode *root)
// {
//     if (root == NULL)
//         return;
//     findMaxUtil(root, root->left);
//     findMaxUtil(root, root->right);
//     findmax(root->left);
//     findmax(root->right);
// }

int maxAncestorDiff(TreeNode *root)
{
    if (root == NULL)
        return 0;
    // maxDiff = -1;
    findMaxUtil(root, root->left);
    findMaxUtil(root, root->right);
    maxAncestorDiff(root->left);
    maxAncestorDiff(root->right);
    return maxDiff;
}
int main()
{
    // root = [8,3,10,1,6,null,14,null,null,4,7,13]
    TreeNode *root = new TreeNode(8);
    root->left = new TreeNode(3);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(6);
    root->right->right = new TreeNode(14);
    root->left->right->left = new TreeNode(4);
    root->left->right->right = new TreeNode(7);
    root->right->right->left = new TreeNode(13);
    cout << maxAncestorDiff(root);
}