#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<int> inorder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
        return ans;
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
    return ans;
}
bool solve(TreeNode *root, int max, int min)
{
    if (root == NULL)
        return true;
    if (root->val > min and root->val < max)
    {

        return solve(root->left, root->val, min) and solve(root->right, max, root->val);
    }
    return false;
}
bool isValidBST(TreeNode *root)
{
    vector<int> ans;
    ans = inorder(root, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] >= ans[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main() {}