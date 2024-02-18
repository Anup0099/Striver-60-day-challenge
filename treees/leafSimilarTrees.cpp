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
vector<int> postOrder(TreeNode *root)
{
    if (root == NULL)
        return {};
    if (root->left == NULL and root->right == NULL)
        return {root->val};
    vector<int> left = postOrder(root->left);
    vector<int> right = postOrder(root->right);
    left.insert(left.end(), right.begin(), right.end());
    return left;
}
bool leafSimilarTrees(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL and root2 == NULL)
        return true;
    if (root1 == NULL or root2 == NULL)
        return false;
    vector<int> leaf1, leaf2;
    leaf1 = postOrder(root1);
    leaf2 = postOrder(root2);
    if (leaf1.size() != leaf2.size())
        return false;
    for (int i = 0; i < leaf1.size(); i++)
    {
        if (leaf1[i] != leaf2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(5);
    root1->right = new TreeNode(15);
    root1->left->left = new TreeNode(3);
    root1->left->right = new TreeNode(7);
    root1->right->right = new TreeNode(18);

    TreeNode *root2 = new TreeNode(10);
    root2->left = new TreeNode(5);
    root2->right = new TreeNode(15);
    root2->left->left = new TreeNode(3);
    root2->left->right = new TreeNode(7);
    root2->right->right = new TreeNode(18);

    cout << leafSimilarTrees(root1, root2) << endl;
}