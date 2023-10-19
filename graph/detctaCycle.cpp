#include <bits/stdc++.h>
using namespace std;
bool dfs(int node, int parent, int visited[], vector<int> adj[])
{
    visited[node] = true;
    for (auto it : adj[node])
    {
        if (!visited[it])
        {
            if (dfs(it, node, visited, adj) == true)
            {
                return true;
            }
            else if (it != parent)
            {
                return true;
            }
        }
    }
    return false;
}

bool isCycle(int V, vector<int> adj[])
{
    // Code here
    int visited[V] = {0};
    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {

            if (dfs(i, -1, visited, adj) == true)
            {
                return true;
            }
        }
    }
    return false;
}
int main() {
    
}