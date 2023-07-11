#include <bits/stdc++.h>
using namespace std;

int minimumEffort(vector<vector<int>>&heights){
    int n= heights.size();
    int m = heights[0].size();
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    vector<vector<int>>dist(n,vector<int>(m,1e9));
    pq.push({0,{0,0}});
    dist[0][0]=0;
    int delrow[]={0,0,1,-1};
    int delcol[]={1,-1,0,0};
    while(!pq.empty()){
        auto it= pq.top();
        pq.pop();
        int x= it.second.first;
        int y= it.second.second;
        int effort=it.first;
        if(x==n-1 && y==m-1)return effort;
        for(int i=0;i<4;i++){
            int newx=x+delrow[i];
            int newy= y+delcol[i];
            if(newx>=0 && newx<n && newy>=0 && newy<m){
                int newEffort= max(effort,abs(heights[x][y]-heights[newx][newy]));
                if(newEffort<dist[newx][newy]){
                    dist[newx][newy]= newEffort;
                    pq.push({newEffort,{newx,newy}});
                }
            }
        }

    }
    return 0;



}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}