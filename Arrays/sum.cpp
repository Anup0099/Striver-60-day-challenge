#include <bits/stdc++.h>
using namespace std;
// given number of nodes and a list of connected pairs, determine the weights of each isolated set of  nodes assuming each node  weigh 1 unit .then for each weight calculated  sum the ceiling of its square root and return the final sum
int connectedSum(int graph_nodes, vector<int> graph_from, vector<int> graph_to)
{
        int ans = 0;
        vector<vector<int>> adj(graph_nodes + 1);
        for (int i = 0; i < graph_from.size(); i++)
        {
                adj[graph_from[i]].push_back(graph_to[i]);
                adj[graph_to[i]].push_back(graph_from[i]);
        }
        vector<bool> visited(graph_nodes + 1, false);
        for (int i = 1; i <= graph_nodes; i++)
        {
                if (!visited[i])
                {
                        int count = 0;
                        queue<int> q;
                        q.push(i);
                        visited[i] = true;
                        while(!q.empty())
                        {
                                int node = q.front();
                                q.pop();
                                count++;
                                for (auto it : adj[node])
                                {
                                        if (!visited[it])
                                        {
                                                q.push(it);
                                                visited[it] = true;
                                        }
                                }
                        }
                        ans += ceil(sqrt(count));
                }
        }
        return ans;
}
int main()
{
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> graph_from(m);
        vector<int> graph_to(m);
        for (int i = 0; i < m; i++)
        {
                cin >> graph_from[i] >> graph_to[i];
        }
        int result = connectedSum(n, graph_from, graph_to);
        cout << result << endl;
        return 0;
}