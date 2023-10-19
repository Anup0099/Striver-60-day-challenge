#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
int spanningTree(int v, vector<vector<int>> adj[])
{
    priority_queue<p, vector<p>, greater<p>> pq;
    int sum = 0;
    vector<bool> vis(v, false);
    pq.push({0, 0});
    while (!pq.empty())
    {
        auto it = pq.top();
        pq.pop();
        int wt = it.first;
        int node = it.second;

        if (vis[node])
        {
            continue;
        }
        vis[node] = true;
        sum += wt;
        for (auto &temp : adj[node])
        {
            int neighbour = temp[0];
            int weight = temp[1];
            if (!vis[neighbour])
            {
                pq.push({weight, neighbour});
            }
        }
    }
    return sum;
}
int main() {}