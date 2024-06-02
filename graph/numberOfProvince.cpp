#include <bits/stdc++.h>
using namespace std;
int findCircleNum(vector<vector<int>> &isConnected)
{
    int n = isConnected.size();
    int m = isConnected[0].size();
    vector<int> adj[isConnected.size()];
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
    queue<int> q;
    vector<bool> vis(n, false);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            count++;
            q.push(i);
            vis[i] = true;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it : adj[node])
                {
                    if (!vis[it])
                    {
                        vis[it] = true;
                        q.push(it);
                    }
                }
            }
        }

    }
    return count;
}
int main() 
{
    vector<vector<int>> isConnected = {{1, 1, 0}, {1, 1, 0}, {0, 0, 1}};
    cout << findCircleNum(isConnected);
}