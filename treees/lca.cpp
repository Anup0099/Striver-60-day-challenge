#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void dfs(TreeNode *root, TreeNode *p, vector<TreeNode *> path1)
{
    if (root == NULL)
        return;
    path1.push_back(root);
    if (root == p)
    {
        return;
    }
    dfs(root->left, p, path1);
    dfs(root->right, p, path1);
}

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *left, TreeNode *right)
{
    vector<TreeNode *> path1, path2;
    dfs(root, left, path1);
    dfs(root, right, path2);
    int i = 0;
    while (i < path1.size() and i < path2.size())
    {
        if (path1[i] != path2[i])
        {
            break;
        }
        i++;

    }
    return path1[i - 1];

}

int main() {
    
}