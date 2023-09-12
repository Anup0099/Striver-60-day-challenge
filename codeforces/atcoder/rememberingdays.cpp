#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<pair<int, int>> adj[11];
vector<bool> used(11, false);
int ans;
void dfs(int v, int sum)
{
    used[v] = true;
    ans = ans > sum ? ans : sum; // max(ans, sum);

    for (auto u : adj[v])
    {
        if (!used[u.first])
        {
            dfs(u.first, sum + u.second);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    for (int i = 1; i <= n; i++)
    {
        dfs(i, 0);
    }
    cout << ans;
}