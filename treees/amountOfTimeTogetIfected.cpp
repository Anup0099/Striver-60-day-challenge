#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
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

    int leftHeight(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + leftHeight(root->left);
    }
    int rightHeight(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + rightHeight(root->right);
    }
    int heightOfTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        return 1 + max(heightOfTree(root->left), heightOfTree(root->right));
    }
    int amountOfTime(TreeNode *root, int start)
    {
        if (root == NULL)
            return 0;
        if (root->val == start)
            return heightOfTree(root);
        return amountOfTime(root->left, start) + amountOfTime(root->right, start);
    }
int main() {}