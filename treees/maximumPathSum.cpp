#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
void leftSum(TreeNode *root)
{
    if (root == NULL)
        return;
    int sum = 0;
    sum += root->val;
    leftSum(root->left);
}

void rightSum(TreeNode *root)
{
    if (root == NULL)
        return;
    int sum = 0;
    sum += root->val;
    rightSum(root->right);
}
int maxSum(TreeNode *root, int maxi)
{
    if (root == NULL)
        return 0;
    int left = maxSum(root->left, maxi);
    int right = maxSum(root->right, maxi);
    maxi = max(maxi, left + right + root->val);
    return max(left, right) + root->val;
}
int maxPathSum(TreeNode *root)
{
    //    path can be with or without root
    //    if path is without root then it is max of left and right subtree
    //    if path is with root then it is left + right + root
    if (root == NULL)
        return 0;
    int maxi = INT_MIN;
    maxSum(root, maxi);
    return maxi;
}
int maxi;
int solve(TreeNode *root)
{
    if (root == NULL)
        return;

    int left = solve(root->left);
    int right = solve(root->right);
    int answer_milgaye = left + right + root->val;
    int koi_ek_acha = max(left, right) + root->val;
    int only_root_acha = root->val;
    maxi = max({maxi, answer_milgaye, koi_ek_acha, only_root_acha});
    return max({koi_ek_acha, only_root_acha});
}
int maxSUmpath(TreeNode *root)
{
    maxi = INT_MIN;
    solve(root);
    return maxi;
}
int main() {}