#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
vector<vector<int>> verticalOrder(TreeNode *root)
{
    map<int, map<int, multiset<int>>> m;
    queue<pair<TreeNode *, pair<int, int>>> q;
    vector<vector<int>> ans;
    q.push({root, {0, 0}});
    while (!q.empty())
    {
        auto temp = q.front();
        int x = temp.second.first;
        int y = temp.second.second;
        TreeNode *node = temp.first;
        q.pop();
        m[x][y].insert(node->val);
        if (node->left == NULL)
        {
            q.push({node->left, {x - 1, y + 1}});
        }
        if (node->right != NULL)
        {
            q.push({node->right, {x + 1, y + 1}});
        }

    }
    for(auto it:m)
    {
        vector<int>col;
        for(auto it2:it.second)
        {
            col.insert(col.end(),it2.second.begin(),it2.second.end());
        }
        ans.push_back(col);
    }
    return ans;
}
int main() {}