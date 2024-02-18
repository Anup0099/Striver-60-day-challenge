#include <bits/stdc++.h>
using namespace std;

vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
{
    vector<int> ans;

    vector<vector<int>> adj(n);
    for (auto it : edges)
    {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    // using bfs
    for (int i = 0; i < n; i++)
    {
        queue<int> q;
        vector<bool> visited(n, false);
        vector<int> dist(n, 0);
        q.push(i);
        visited[i] = true;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            for (auto it : adj[node])
            {
                if (!visited[it])
                {
                    visited[it] = true;
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }
        int sum = 0;
        for (auto it : dist)
        {
            sum += it;
        }
        ans.push_back(sum);
    }
    return ans;
}
int main() {}