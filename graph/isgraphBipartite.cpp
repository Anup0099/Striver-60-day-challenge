#include <bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<int>> &graph, vector<int> &color, int node, int col)
{
    color[node] = col;
    for (auto it : graph[node])
    {
        if (color[it] == -1)
        {
            dfs(graph, color, it, 1 - col);
        }
        else if (color[it] == color[node])
        {
            return false;
        }
    }
    return true;
}
bool isBipartite(vector<vector<int>> &graph)
{
    int n = graph.size();
    int m = graph[0].size();
    vector<int> color(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            if (dfs(graph, color, i, 0) == false)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    //   [[],[2,4,6],[1,4,8,9],[7,8],[1,2,8,9],[6,9],[1,5,7,8,9],[3,6,9],[2,3,4,6,9],[2,4,5,6,7,8]]
    vector<vector<int>> graph = {{}, {2, 4, 6}, {1, 4, 8, 9}, {7, 8}, {1, 2, 8, 9}, {6, 9}, {1, 5, 7, 8, 9}, {3, 6, 9}, {2, 3, 4, 6, 9}, {2, 4, 5, 6, 7, 8}};

    cout << isBipartite(graph) << endl;
}