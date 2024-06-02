/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
long long result = 0;
int N;
vector<int> nodecount;
int dfs_1(unordered_map<int, vector<int>> graph, int node, int parent, vector<vector<int>> edges, int curr_depth)
{
    int totalNodes = 1;
    result += curr_depth;
    for (auto child : graph[node])
    {
        if (child != parent)
        {
            totalNodes += dfs_1(graph, child, node, edges, curr_depth + 1);
        }
    }
    nodecount[node] = totalNodes;
    return totalNodes;
}
void dfs(unordered_map<int, vector<int>> graph, int parent, int prevNode, vector<int> &ans)
{
    for (auto child : graph[parent])
    {
        if (child != parent)
        {
            ans[child] = ans[parent] - nodecount[child] + N - nodecount[child];
            dfs(graph, child, parent, ans);
        }
    }
}
vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
{
    N = n;
    nodecount.resize(n, 0);
    unordered_map<int, vector<int>> graph;
    for (int i = 0; i < edges.size(); i++)
    {
        graph[edges[i][0]].push_back(edges[i][1]);
        graph[edges[i][1]].push_back(edges[i][0]);
    }
    result = 0;
    dfs_1(graph, 0, -1, edges, 0);
    vector<int> ans(n, 0);
    ans[0] = result;
    dfs(graph, 0, -1, ans);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> tree;
// vector<int> count, res;

// void dfs(int root, int pre)
// {
//     for (auto i : tree[root])
//     {
//         if (i == pre)
//             continue;
//         dfs(i, root);
//         count[root] += count[i];
//         res[root] += res[i] + count[i];
//     }
// }

// void dfs2(int root, int pre, int n)
// {
//     for (auto i : tree[root])
//     {
//         if (i == pre)
//             continue;
//         res[i] = res[root] - count[i] + n - count[i];
//         dfs2(i, root, n);
//     }
// }

// vector<int> sumOfDistancesInTree(int n, vector<vector<int>> &edges)
// {
//     tree.resize(n);
//     count.assign(n, 1);
//     res.assign(n, 0);
//     for (auto e : edges)
//     {
//         tree[e[0]].push_back(e[1]);
//         tree[e[1]].push_back(e[0]);
//     }
//     dfs(0, -1);
//     dfs2(0, -1, n);
//     return res;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
// }