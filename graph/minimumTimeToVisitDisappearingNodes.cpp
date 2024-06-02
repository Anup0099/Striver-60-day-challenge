#include <bits/stdc++.h>
using namespace std;
vector<int> minimumTime(int n, vector<vector<int>> &edges, vector<int> &disappear)
{
    vector<int> ans(n);
    vector<vector<pair<int, int>>> graph(n);
    for (auto &it : edges)
    {
        int u = it[0];
        int v = it[1];
        int w = it[2];
        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    vector<int> disappear_time(n, INT_MAX);

}
#include <bits/stdc++.h>
using namespace std;

vector<int> minimumTime(int n, vector<vector<int>> &edges, vector<int> &disappear) {
    vector<vector<pair<int, int>>> adj(n);
    for (auto &edge : edges) {
        int u = edge[0], v = edge[1], w = edge[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<int> dis(n, INT_MAX);
    dis[0] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0});

    while (!pq.empty()) {
        int node = pq.top().second;
        int nodeDist = pq.top().first;
        pq.pop();

        if (nodeDist > disappear[node]) continue;

        for (auto &edge : adj[node]) {
            int nextNode = edge.first;
            int edgeWeight = edge.second;

            if (nodeDist + edgeWeight < min(dis[nextNode], disappear[nextNode])) {
                dis[nextNode] = nodeDist + edgeWeight;
                pq.push({dis[nextNode], nextNode});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (dis[i] >= disappear[i]) dis[i] = -1;
    }

    return dis;
}

int main() {
    // Add test code here
}
int main()
{
}