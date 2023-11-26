#include <bits/stdc++.h>
using namespace std;
// Kefa decided to celebrate his first big salary by going to the restaurant.

// He lives by an unusual park. The park is a rooted tree consisting of n vertices with the root at vertex 1. Vertex 1 also contains Kefa's house. Unfortunaely for our hero, the park also contains cats. Kefa has already found out what are the vertices with cats in them.

// The leaf vertices of the park contain restaurants. Kefa wants to choose a restaurant where he will go, but unfortunately he is very afraid of cats, so there is no way he will go to the restaurant if the path from the restaurant to his house contains more than m consecutive vertices with cats.

// Your task is to help Kefa count the number of restaurants where he can go.

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<vector<int>> adj(n - 1, vector<int>(2));
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        //   adjacency list
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(adj, v, m, 0, 0, 0);

}