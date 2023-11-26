#include <bits/stdc++.h>
using namespace std;
//  There are n teams numbered from 0 to n - 1 in a tournament; each team is also a node in a DAG.

// You are given the integer n and a 0-indexed 2D integer array edges of length m representing the DAG, where edges[i] = [ui, vi] indicates that there is a directed edge from team ui to team vi in the graph.

// A directed edge from a to b in the graph means that team a is stronger than team b and team b is weaker than team a.

// Team a will be the champion of the tournament if there is no team b that is stronger than team a.

// Return the team that will be the champion of the tournament if there is a unique champion, otherwise, return -1.

int findChampion(int N, vector<vector<int>> &edges)
{
    int n = edges.size();
    int m= edges[0].size();
    vector<int>adj[N];
    for(int i=0;i<n;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    int ans = 0;
    for(int i=0;i<N;i++){
        if(adj[i].size()>ans){
            ans = adj[i].size();
        }
    }
    for(int i=0;i<N;i++){
        if(adj[i].size()==ans){
            return i;
        }
    }
    return -1;

}
int main() {
    vector<vector<int>>grid{{0,1},{1,2}};
    int N = 3;
    cout<<findChampion(N,grid);
}