#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left;
    Node *right;
};
int leftRootSum(Node *root)
{
    int ans = 0, left = 0, right = 0;
    if (root == 0)
    {
        return 0;
    }
    if (root->left)
    {

        if (root->left->left == NULL && root->left->right == NULL)
        {
            ans += root->left->val;
        }
        else
        {
            ans += leftRootSum(root->left);
        }
    }
    right = leftRootSum(root->right);
    return ans + left + right;
}
int main()
{
    Node *root = new Node();
    root->val = 1;
    root->left = new Node();
    root->left->val = 2;
    root->right = new Node();
    root->right->val = 3;
    root->left->left = new Node();
    root->left->left->val = 4;
    root->left->right = new Node();
    root->left->right->val = 5;
    cout << leftRootSum(root);
}