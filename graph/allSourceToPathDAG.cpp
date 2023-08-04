#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &graph, int src, int dest, vector<int> &path, vector<vector<int>> &ans)
{
    vector<int> visited(graph.size(), 0);
    visited[src] = 1;

    if (src == dest)
    {
        ans.push_back(path);
        return;
    }
    for (auto it : graph[src])
    {
        if (!visited[it])
        {
            path.push_back(it);
            dfs(graph, it, dest, path, ans);
            path.pop_back();
        }
    }
    
}
vector<vector<int>> allPathsSOurceToTarget(vector<vector<int>> &graph)
{
    vector<vector<int>> ans;
    int n = graph.size();
    int m = graph[0].size();
    vector<int> path;
    path.push_back(0);
    dfs(graph, 0, n - 1, path, ans);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}