#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
void solve(Node *root, int sum, int maxSum, int length, int maxlength)
{
    // base case
    if (root == NULL)
    {
        if (length > maxlength)
        {
            maxlength = length;
            maxSum = sum;
        }
        else if (length == maxlength)
        {
            maxSum = max(maxSum, sum);
        }
        return;
    }
    sum += root->data;
    solve(root->left, sum, maxSum, length + 1, maxlength);
    solve(root->right, sum, maxSum, length + 1, maxlength);
}
int sumOfNodes(Node *root)
{
    int sum = 0;
    int maxSum = 0;
    int length = 0;
    int maxLength = 0;
    solve(root, sum, maxSum, length, maxLength);
}
int rightLeafSum(Node *root)
{
    // Code here
    if (root == NULL)
        return 0;

    if (root->right != NULL and root->right->left == NULL and root->right->right == NULL)
    {
        return root->right->data + rightLeafSum(root->left);//
    }
    else
    {
        return rightLeafSum(root->left) + rightLeafSum(root->right);
    }
}
int main() {}
