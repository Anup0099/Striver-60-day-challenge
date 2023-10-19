#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};
int getCount(TreeNode *root, int l, int h)
{
    // kya bola hai samjho pehle count the number of nodes in the given range the values smaller than the root go to the left side and the values greater than the root go to the right side to if root == null return 0
    if (root == NULL)
    {
        return 0;
    }

    if (root->val >= l and root->val <= h)
    {
        return 1 + getCount(root->left, l, h) + getCount(root->right, l, h);
    }
    else if (root->val < l)
    {
        return getCount(root->right, l, h);
    }else if(root->val > h)
    {
        return getCount(root->left, l, h);
    }
    
}
int main() {}