#include <bits/stdc++.h>
using namespace std;
vector<int> dfs(unordered_map<int, vector<int>> &adj, int u, vector<bool> &visited, vector<int> result)
{
    if (visited[u] == true)
    {
        return;
    }
    visited[u] = true;
    result.push_back(u);
    for (int &v : adj[u])
    {
        if (!visited[v])
        {
            dfs(adj, v, visited, result);
        }
    }
    return result;
}
vector<int> dfsOfgraph(int v, vector<int> mp[])
{
    unordered_map<int, vector<int>> adj;
    for (int u = 0; u < v; u++)
    {
        for (auto j = mp[u].begin(); j != mp[u].end(); j++)
        {
            mp[u].push_back(*j);
        }
    }
    vector<int> result;
    vector<bool> visited(v, false);
    dfs(adj, 0, visited, result);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}