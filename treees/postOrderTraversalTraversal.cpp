#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left;
    Node *right;
};
void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->val;
    inorder(root->right);
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
    root->right->left = new Node();
    root->right->left->val = 6;
    root->right->right = new Node();
    root->right->right->val = 7;
    postOrder(root);
    
}