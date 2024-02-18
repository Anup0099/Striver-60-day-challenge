#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode *left, *right;
    TreeNode(int x)
    {
        data = x;
        left = right = NULL;
    }
};
string treeFromString(TreeNode *root)
{
    string ans = "";
    if (root == NULL)
        return ans;
    ans += to_string(root->data);
    if (root->left)
    {
        ans += "(";
        ans += treeFromString(root->left);
        ans += ")";
    }
    else if (root->right)
    {
        ans += "()";
    }

    if (root->right)
    {
        ans += "(";
        ans += treeFromString(root->right);
        ans += ")";
    }
    return ans;
}

int main() {}