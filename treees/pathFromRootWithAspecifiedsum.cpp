#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void solve(Node *root, int sum, vector<vector<int>> &ans, vector<int> &temp, int sum1)
{
    if (root == NULL)
        return;
    sum += root->data;
    temp.push_back(root->data);
    if (root->left == NULL and root->right == NULL)
    {
        if (sum == sum1)
        {
            ans.push_back(temp);
        }
    }
    solve(root->left, sum, ans, temp, sum1);
    solve(root->right, sum, ans, temp, sum1);
}
vector<vector<int>> printPaths(Node *root, int sum)
{
    // code here
    vector<vector<int>> ans;
    vector<int> temp;
    int sum1 = 0;
    solve(root, sum, ans, temp, sum1);
    return ans;
}
int main() {}