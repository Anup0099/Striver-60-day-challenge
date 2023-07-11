#include <bits/stdc++.h>
using namespace std;
int f(int i,int j,int n,int m){
    if(i==0 and j==0)return 1;
    if(i<0 or j<0)return 0;
    int up= f(i-1,j,n,m);
    int left=f(i,j-1,b,m);
    return up+left;
}
int uniquePaths(int n,int m){
    int i=n-1,j=m-1;
   int dp[n][m];
   for(int i=0i<n;i++){
    for(int j=0;j<m;j++){
        if(i==0 and j==0)dp[i][j]=1;
        else{
            int up=0;
            int left=0;
            if(i>0) up=dp[i-1][j];
            if(j>0)left= dp[i][j-1];
            dp[i][j]=up+left;
        }
    }
   }
   return dp[n][m];
}
int f(int n,int m){
    vector<int>prev(n,0);
    for(int i=0;i<m;i++){
        vector<int>curr(n,0);
        for(int j=0;j<n;j++){
            if(i==0 and j==0)curr[j]=1;
            else{
                int up=0,left=0;
                if(i>0)up= prev[j];
                if(j>0)left= curr[j-1];
                curr[j]=up+left;
            }
        }
        prev= curr;
    }
    return prev[n-1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}