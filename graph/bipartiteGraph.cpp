#include <bits/stdc++.h>
using namespace std;
bool bipartiteDFS(int node, vector<int> adj[], int color[])
{
    if (color[node] == -1)
    {
        color[node] = 1;
    }
    for (auto &it : adj[node])
    {
        if (color[it] == -1)
        {
            color[it] = 1 - color[node];
            if (!bipartiteDFS(it, adj, color))
            {
                return false;
            }
            else if (color[it] == color[node])
            {
                return false;
            }
            return true;
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(3);
    adj[4].push_back(1);
    adj[1].push_back(4);
    int color[n + 1];
    memset(color, -1, sizeof(color));
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == -1)
        {
            if (!bipartiteDFS(i, adj, color))
            {
                cout << "Not Bipartite" << endl;
                return 0;
            }
        }
    }
    cout << "Bipartite" << endl;
}