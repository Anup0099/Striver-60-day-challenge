#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
// void inorder(TreeNode *root)
// {
//     if (root == NULL)
//         return;
//     inorder(root->left);
//     cout << root->val << " ";
//     inorder(root->right);
// }

int rangeSumBST(TreeNode *root, int low, int high)
{
    // how recursion works:
    // 1. base case
    // 2. recursive call
    // 3. return value
    // in this problem, we have to find the sum of all the nodes whose value is in the range [low, high] inclusive sum+=root->val then we have to check if the left subtree of the root is in the range or not if yes then we have to add the sum of the left subtree to the sum variable and same for the right subtree otherwise we have to ignore that subtree and return the sum variable
    if (root == NULL)
        return 0;
    int sum = 0;
    if (root->val >= low && root->val <= high)
    {
        sum += root->val;
    }
    if (root->val > low)
    {
        sum += rangeSumBST(root->left, low, high);
    }
    if (root->val < high)
    {
        sum += rangeSumBST(root->right, low, high);
    }
    return sum;
}

int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    cout << rangeSumBST(root, 7, 15) << endl;
}