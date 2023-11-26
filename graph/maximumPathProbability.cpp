#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, int vis[],int pathVisited[], vector<int> adj[])
{
    vis[node] = 1;
    pathVisited[node] = 1;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (dfs(it, vis, pathVisited, adj) == true)
            {
                return true;
            }
        }
        else if (pathVisited[it] == true)
        {
            return true;
        }
    }
    pathVisited[node] = false;
    return false;
}
bool isCyclic(int V, vector<int> adj[])
{
    // code here
    int visited[V] = {0};
    int pathVisited[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (dfs(i, visited, pathVisited, adj) == true)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}