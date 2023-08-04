#include <bits/stdc++.h>
using namespace std;
// given a number of nodes and a list of connected pairs determine the weights of each isolated set of nodes assuming each node has a weight of 1 then for each weight calculated sum of ceilings of its squeare root and return the final sum
// graph_nodes=10;
// graph_from=[1,1,2,3,7];
// graph_to=[2,3,4,5,8];
// output=8
void dfs(int node, vector<int> adj[], vector<int> &visited, int &count)
{
    visited[node] = 1;
    count++;
    for (auto it : adj[node])
    {
        if (!visited[it])
        {
            dfs(it, adj, visited, count);
        }
    }
}
int connected(vector<int> from, vector<int> to, int n)
{
    vector<int> adj[n + 1];
    for (int i = 0; i < from.size(); i++)
    {
        adj[from[i]].push_back(to[i]);
        adj[to[i]].push_back(from[i]);
    }
    int count = 0;
    vector<int> visited(n + 1, 0);
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            count = 0;
            dfs(i, adj, visited, count);
            ans += ceil(sqrt(count));
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 4;
    vector<int> from = {1, 1};
    vector<int> to = {2, 4};
    cout << connected(from, to, n);
}