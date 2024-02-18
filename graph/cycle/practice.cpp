#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, int parent, vector<int> &vis, vector<int> adj[], bool &cycle)
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(it, node, vis, adj, cycle))
            {
                return true;
            }
        }
        else if (it != parent and vis[it] == 1)
        {
            return true;
        }
    }
    return false;
}
bool detectCycle(int n, vector<int> a)
{
    int parent = -1;
    vector<int> vis(n + 1, 0);
    bool cycle = false;
    vector<int> adj[n + 1];
    for (int i = 0; i < a.size(); i++)
    {
        adj[a[i]].push_back(i + 1);
        adj[i + 1].push_back(a[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i, parent, vis, adj, cycle);
        }
    }
    return cycle;
}
void solve(int node , vector<int>adj[], vector<bool>&vis,vector<int>&ans)
{
    vis[node]=true;
    ans.push_back(node);
    for(auto it:adj[node])
    {
        if(!vis[it])
        {
            solve(it,adj,vis,ans);
        }
    }

}
vector<int> dfsOfGraph(int V, vector<int> adj[])
{
    // Code here
    vector<bool> vis(V, false);
    vector<int> ans;
    solve(0, adj, vis,ans);
    return ans;
}
int numsIsland(vector<vector<int>>grid)
{
    int n= grid.size();
    int m= grid[0].size();
}
int main() {}