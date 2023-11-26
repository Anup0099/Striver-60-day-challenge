#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    TreeNode *left, *right;
    int val;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int countNodes(TreeNode *root)
{
    int cnt = 0;
    if (root == NULL)
        return 0;
    cnt++;
    cnt += countNodes(root->left);
    cnt += countNodes(root->right);
    return cnt;
}
int sumNodes(TreeNode *root, int &count)
{
    int sum = 0;
    if (root == NULL)
        return 0;
    sum += root->val;
    count++;
    sum += sumNodes(root->left, count);
    sum += sumNodes(root->right, count);
    return sum;
}
int averageOfSubtree(TreeNode *root)
{
    int count = 0;
    int result = 0;
    if (root == NULL)
        return 0;
    int sum = sumNodes(root, count);
    if (root->val == (sum / count))
        result++;
    result += averageOfSubtree(root->left);
    result += averageOfSubtree(root->right);
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    cout << sumNodes(root) << endl;
}