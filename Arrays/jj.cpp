#include <bits/stdc++.h> 
using namespace std; 

// There are server_nodes server hosted by a company that send and receive messages. The netwrok of server connections is represented by a tree of server_nodes servers with server_nodes -1 edges, where the ith edge connects the servers serve_from[i] and serve_to[i]. Each edge has an associated weight, server_wwight[i], which represents the distance between the servers connected by the ith edge.

// To send a message, server x connects to two different server y and z. The two servers are connected only if the distance between them is actually divisible by signal_speed. It then send the signal accross the network. For each server i, the company want sto know the nmber of disjoints pairs of server (j,k) through which the signal can be sent.Return and array of server_nodes integers, where the ith integer represnets the nu,ber of disjoint pairs of servers (j,k) through which server i can send message.

// Example
// server_nodes = 4
// server_from = [1,1,2]
// server_to = [2,3,4]
// server_weight = [2,5,3]
// signal_speed = 5

// from server 1, the valid pairs are (3,4) and (4,3). The distances sum to 5 between 1 and 4 and between 1 and 3 and 5 is divisible by signal_speed. 
// from server 2, there are no valid pairs. Distances are 3, 2 and 7 to server 4,1,3 respectively. None of these are divisible by signal_speed.
// from server 3, the valid pairs are (1,4) and (4,1). The distances sum to 5 between 3 and 1 and between 3 and 4 and 5 is divisible by signal_speed.
// from server 4, the valid pairs are (1,3) and (3,1). The distances sum to 5 between 4 and 1 and between 4 and 3 and 5 is divisible by signal_speed.
// so the answer is [2,0,2,2]

vector<int>solve(vector<int>serve_from, vector<int>serve_to, vector<int>serve_weight, int signal_speed){
    int n = serve_from.size();
    vector<vector<pair<int,int>>>adj(n+1);
    for(int i=0;i<n;i++){
        adj[serve_from[i]].push_back({serve_to[i],serve_weight[i]});
        adj[serve_to[i]].push_back({serve_from[i],serve_weight[i]});
    }
    vector<int>ans(n+1,0);
    for(int i=1;i<=n;i++){
        vector<int>dist(n+1,INT_MAX);
        dist[i]=0;
        queue<int>q;
        q.push(i);
        while(!q.empty()){
            int node = q.front();
            q.pop();
            for(auto it:adj[node]){
                int child = it.first;
                int weight = it.second;
                if(dist[child]>dist[node]+weight){
                    dist[child]=dist[node]+weight;
                    q.push(child);
                }
            }
        }
        for(int j=1;j<=n;j++){
            if(dist[j]%signal_speed==0){
                ans[i]++;
            }
        }
        ans[i]--;
    }
    return ans;
}

int main(){
    int n = 4;
    vector<int>serve_from = {1,2,3};
    vector<int>serve_to = {2,3,4};
    vector<int>serve_weight = {2,2,2};
    int signal_speed = 2;
    vector<int>ans = solve(serve_from,serve_to,serve_weight,signal_speed);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}