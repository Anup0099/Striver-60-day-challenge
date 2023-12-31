#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    node *left, *right;
    node(int x)
    {
        x = val;
        left = NULL;
        right = NULL;
    }
};
int findHeightLeft(node *cur)
{
    int hght = 0;
    while (cur)
    {
        hght++;
        cur = cur->left;
    }
    return hght;
}
int findHeightRight(node *cur)
{
    int hght = 0;
    while (cur)
    {
        hght++;
        cur = cur->right;
    }
    return hght;
}
int countNodes(node *root)
{
    if (root == NULL)
        return 0;

    int lh = findHeightLeft(root);
    int rh = findHeightRight(root);

    if (lh == rh)
        return (1 << lh) - 1;

    int leftNodes = countNodes(root->left);
    int rightNodes = countNodes(root->right);

    return 1 + leftNodes + rightNodes;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}