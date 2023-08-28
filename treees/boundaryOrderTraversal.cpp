#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
bool isLeaf(node *root)
{
    if (root->left == NULL and root->right == NULL)
    {
        return true;
    }
    return false;
}
void leftBoundary(node *root, vector<int> &res)
{
    node *curr = root->left;
    while (curr)
    {

        if (!isLeaf(curr))
        {
            res.push_back(curr->data);
        }
        if (curr->left)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }
}
void rightBoundary(node *root, vector<int> &res)
{
    vector<int> temp;

    node *curr = root->right;
    while (curr)
    {
        if (!isLeaf(curr))
        {
            temp.push_back(curr->data);
        }
        if (curr->right)
        {
            curr = curr->right;
        }
        else
        {
            curr = curr->left;
        }
    }
    for (int i = temp.size(); i >= 0; i--)
    {
        res.push_back(temp[i]);
    }
}
void addLeaves(node *root,vector<int>&res)
{
    if (isLeaf(root))
    {
        res.push_back(root->data);
        return;
    }
    if (root->left)
    {
        addLeaves(root->left, res);
    }
    if (root->right)
    {
        addLeaves(root->right, res);
    }
}
vector<int>boundary(node *root)
{
    vector<int>res;
    if (root == NULL)
    {
        return res;
    }
    if (!isLeaf(root))
    {
        res.push_back(root->data);
    }
    leftBoundary(root, res);
    addLeaves(root, res);
    rightBoundary(root, res);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}