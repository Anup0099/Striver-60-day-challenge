#include <bits/stdc++.h>
using namespace std;
//breadth first search
//O(V+E)
//O(V)
void bfs(vector<int> adj[], int s, int V)
{
    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

void bfs(vector<int>adj[],int v,int s){
    bool visited[v];
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int i:adj[node]){
            if(!visited[i]){
                visited[i]=true;
                q.push(i);
            }

        }


    }


}

int numberOfRottenOranges(  vector<vector<int>> &matrix, int r, int c)
{
    


}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}