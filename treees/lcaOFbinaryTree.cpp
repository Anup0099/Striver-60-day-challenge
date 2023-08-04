#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
bool hasPath(TreeNode *root, vector<int> v, int x)
{
    if (root == NULL)
        return false;
    v.push_back(root->val);
    if (root->val == x)
        return true;
    int left = hasPath(root->left, v, x);
    int right = hasPath(root->right, v, x);
    if (left || right)
        return true;
    v.pop_back();
    return false;
}
TreeNode *lca(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (root == NULL || root == p || root == q)
        return root;
    TreeNode *left = lca(root->left, p, q);
    TreeNode *right = lca(root->right, p, q);
    if (left == NULL)
        return right;
    if (right == NULL)
        return left;
    return root;
}
void print(TreeNode *root, int x)
{
    if (root == NULL)
        return;
    if (root->val == x)
        return;
    cout << root->val << " ";
    print(root->left, x);
    print(root->right, x);
}
TreeNode *lca2(TreeNode *root, TreeNode *p, TreeNode *q)
{
    vector<int> v1, v2;
    hasPath(root, v1, p->val);
    hasPath(root, v2, q->val);
    int i = 0;
    while (i < v1.size() && i < v2.size())
    {
        if (v1[i] != v2[i])
            break;
        i++;
    }
    TreeNode *ans = new TreeNode(v1[i - 1]);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    int x = 5, y = 1;
    TreeNode *ans = lca(root, root->left, root->right);
    cout << ans->val;
}