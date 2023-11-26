#include <bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adj[], vector<bool> visit)
{
    visit[u] = true;
    for (auto it : adj[node])
    {
        if (!visit[it])
        {
            dfs(it, adj, visit);
        }
    }
    st.push(node);
}
vector<int> toposort(int v, vector<int> arr[])
{
    vector<int> a;
    vector<bool> visit(v, false);
    stack<int> st;
    for (int i = 0; i < v; i++)
    {
        if (!visit[i])
        {
            dfs(i, visit, st, arr);
        }
    }
    while (!st.empty())
    {
        a.push_back(st.top());
        st.pop();
    }
    return a;
}
int main() {}