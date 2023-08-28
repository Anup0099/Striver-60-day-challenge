#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};
vector<vector<int>> zigzag(Node *root)
{
    vector<vector<int>> res;
    if (root == NULL)
        return res;
    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp(size);
        for (int i = 0; i < size; i++)
        {
            Node *curr = q.front();
            q.pop();
            int index = (leftToRight) ? i : (size - i - 1);
            temp[index] = curr->data;
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        leftToRight = !leftToRight;
        res.push_back(temp);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}