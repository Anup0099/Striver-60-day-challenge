#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<int> par, dis;
void dfs(int u, int p = 0, int d = 0)
{
    dis[u] = d;
    par[u] = p;
    for (int v : adj[u])
    {
        if (v == p)
            continue;
        dfs(v, u, d + 1);
    }
}
int dfs2(int u, vector<int> &amount)
{
    int ret = amount[u];
    int mxc = -INT_MAX;
    for (int v : adj[u])
    {
        mxc = max(mxc, dfs2(v, amount));
    }
    if (mxc == -INT_MAX)
        return ret;
    else
        return ret + mxc;
}
int mostProfitablePath(vector<vector<int>> &edges, int bob, vector<int> &amount)
{
    int n = amount.size();
    adj.resize(n);
    for (auto &it : edges)
    {
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }
    // dfs to find the parent and distance of each node from the root
    par.resize(n);
    dis.resize(n);
    dfs(0);
    int cur = bob;
    int bob_dis = 0;
    // update the path of from BOB to 0;
    while (cur != 0)
    {
        if (dis[cur] > bob_dis)
        {
            bob_dis = dis[cur];
        }
        else if (dis[cur] == bob_dis)
        {
            amount[cur] /= 2;
        }
        cur = par[cur];
        bob_dis++;
    }
    return dfs2(0, amount);
}
int main() {}