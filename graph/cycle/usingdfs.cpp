#include <bits/stdc++.h>
using namespace std;
// cycle detection using dfs in an undirected graph

// time complexity: O(V+E)
// space complexity: O(V+E)+O(V)+O(V)

bool dfscheck(vector<int> adj[], int node, vector<bool> &visited, int parent)
{
    visited[node] = true;
    for(int it:adj[node]){
       if(node==parent){
           continue;
       }
       if(visited[it]==true)
       {
        return true;
       }
       if(dfscheck(adj,it,visited,node)==true){
           return true;
       }
    }
    return false;
}

int main() {}