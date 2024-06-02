#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int node, vector<bool> &vis)
{
    vis[node] = true;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(adj, it, vis);
        }
    }
}

int findCircleNum(vector<vector<int>> &isConnected)
{
    int n = isConnected.size();
    vector<bool> vis(n, false);
    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (isConnected[i][j] == 1)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            count++;
            dfs(adj, i, vis);
        }
    }
    return count;
}
int main()
{
    vector<vector<int>> isConnected = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    cout << findCircleNum(isConnected);
}