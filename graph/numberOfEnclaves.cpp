#include <bits/stdc++.h> 
using namespace std;
int numberOfEnclaves(vector<vector<int>>&grid)
{
    int n= grid.size();
    int m= grid[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    queue<pair<int, int>>q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]==1)
            {
                q.push({i,j});
                vis[i][j]=1;
            }
            else
            {
                vis[i][j]=0;
            }
        }
    }
    vector<int>delrow={-1,0,1,0};
    vector<int>delcol={0,1,0,-1};
    while(!q.empty())
    {
        int row= q.front().first;
        int col= q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]==1)
            {
                vis[nrow][ncol]=1;
                q.push({nrow,ncol});
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vis[i][j]==0 && grid[i][j]==1)
            {
                count++;
            }
        }
    }
    return count;
} 
int main() {} 