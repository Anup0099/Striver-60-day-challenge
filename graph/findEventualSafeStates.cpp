#include <bits/stdc++.h>
using namespace std;
// find the eventual safe states
bool isCycleDFS(vector<vector<int>> adj, int u, vector<bool> &visited, vector<bool> &inRecursion)
{
    visited[u] = true;

    inRecursion[u] = true;
    for (auto &v : adj[u])
    {
        if (!visited[v] && isCycleDFS(adj, v, visited, inRecursion))
        {
            return true;
        }
        else
        {
            if (inRecursion[v] == true)
            {
                return true;
            }
        }
        inRecursion[u] = false;
    }
    return false;
}
vector<int> eventualSafeNodes(vector<vector<int>> &graph)
{
    vector<bool> visited(graph.size(), false);
    vector<bool> inRecursion(graph.size(), false);
    for (int i = 0; i < graph.size(); i++)
    {
        if (!visited[i])
        {
            isCycleDFS(graph, i, visited, inRecursion);
        }
    }
    vector<int> safeNodes;
    for (int i = 0; i < graph.size(); i++)
    {
        if (!inRecursion[i])
        {
            safeNodes.push_back(i);
        }
    }
    return safeNodes;
}
int main() {}