#include <bits/stdc++.h>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
vector<int> largestValue(TreeNode *root)
{
    queue<TreeNode *> q;
    q.push(root);
    vector<int> ans;
    while (!q.empty())
    {
        int n = q.size();
        int maximum = INT_MIN;
        while (n--)
        {
            TreeNode *temp = q.front();
            q.pop();
            maximum = max(maximum, temp->val);
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
        ans.push_back(maximum);
    }
    return ans;
}
int main() {}