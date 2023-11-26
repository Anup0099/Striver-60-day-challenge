#include <bits/stdc++.h>
using namespace std;
// There is an undirected tree with n nodes labeled from 0 to n - 1, and rooted at node 0. You are given a 2D integer array edges of length n - 1, where edges[i] = [ai, bi] indicates that there is an edge between nodes ai and bi in the tree.

// You are also given a 0-indexed integer array values of length n, where values[i] is the value associated with the ith node.

// You start with a score of 0. In one operation, you can:

// Pick any node i.
// Add values[i] to your score.
// Set values[i] to 0.
// A tree is healthy if the sum of values on the path from the root to any leaf node is different than zero.

// Return the maximum score you can obtain after performing these operations on the tree any number of times so that it remains healthy.
// int dfs(int node, vector<int> adj[], vector<int> &values, int &ans, vector<int> &visited)
// {
//     visited[node] = 1;
//     int sum = 0;
//     for (int i = 0; i < adj[node].size(); i++)
//     {
//         if (visited[adj[node][i]] == 0)
//         {
//             sum += dfs(adj[node][i], adj, values, ans, visited);
//         }
//     }
//     sum += values[node];
//     if (sum == 0)
//     {
//         return 0;
//     }
//     else
//     {
//         ans += abs(sum);
//         return sum;
//     }
// }

long long solve(int parent, vector<int> values, vector<int> adj[], int node, int ans,bool &flag)
{
    long long score1 = values[node];
    long long score2 = 0;
    for(auto it: adj[node])
    {
        if(parent == it)
        {
            continue;
        }
        if(flag==false)
        {
            // means we skip this node
            score1 += solve(node,values,adj,it,ans,flag);
        }
        score2 += solve(node,values,adj,it,ans,flag);

        if()
    }
}
long long maximumScoreAfterOperations(vector<vector<int>> &edges, vector<int> &values)
{
    int n = values.size();
    vector<int> adj[n];
    for (int i = 0; i < edges.size(); i++)
    {
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    int parent = -1;
    bool flag = false;
    int count = 0;

    return solve(parent, values, adj, 0, 0,flag);
}
int main()
{
    // [[0,1],[0,2],[0,3],[2,4],[4,5]]
    //  [5,2,5,2,1,1]
    vector<vector<int>> grid{{0, 1}, {0, 2}, {0, 3}, {2, 4}, {4, 5}};
    vector<int> values{5, 2, 5, 2, 1, 1};
    cout << maximumScoreAfterOperations(grid, values);
}