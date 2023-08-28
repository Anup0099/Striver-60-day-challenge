#include <bits/stdc++.h>
using namespace std;
bool isBFS(int v, vector<int> adj[], int u, vector<bool> visited)
{
    queue<pair<int, int>> q;
    q.push({u,-1});
    visited[u] = true;
    while(!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        int source= p.first;
        int parent=p.second;
        for(int &v:adj[source])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push({v,source});
            }
            else if(v!=parent)
            {
                return true;
            }
        }
    }
    return false;

}
bool isCycle(int v, vector<int> adj[])
{
    vector<bool> visited(v, 0);
    for (int i = 0; i < v; i++)
    {
        if (!visited[i] and isBFS(v, adj, i, visited))
        {
            return true;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}