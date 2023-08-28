#include <bits/stdc++.h>
using namespace std;
// a city has many potenitial drop-off centres to choose from represented as nodes on a weighted undirected graph. the edge of this graph denote roads that connect pdcs with weights representing the lengths of the roads.Determine how many unique subsets of these companies can be contracted that will satisfy that requirement id they make an agreement with the company they will have a drop off center in every location that the company owns
// graph_nodes=3
// graph_from=[1,2,3]
// graph_to=[2,3,1]
//minDistancce=4
//companies=[1,2,3]
int findCount(int graph_nodes,vector<int>from,vector<int>to,int minDistance,vector<int>companies)
{
    vector<vector<int>> adj(graph_nodes+1);
    for(int i=0;i<from.size();i++)
    {
        adj[from[i]].push_back(to[i]);
        adj[to[i]].push_back(from[i]);
    }
    vector<int> dist(graph_nodes+1,INT_MAX);
    queue<int> q;
    for(auto it:companies)
    {
        dist[it]=0;
        q.push(it);
    }
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(dist[node]+1<dist[it])
            {
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=graph_nodes;i++)
    {
        if(dist[i]<=minDistance)
        {
            ans++;
        }
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int graph_nodes=2;
    vector<int> graph_from={1,2,3};
    vector<int> graph_to={2,3,1};
    int minDistance=4;
    vector<int> companies={1,2,3};
    cout<<findCount(graph_nodes,graph_from,graph_to,minDistance,companies);
}