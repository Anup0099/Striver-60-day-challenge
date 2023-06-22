#include <bits/stdc++.h>
using namespace std;
int f(int i,int j,vector<vector<int>>&v){
    if(i==0&&j==0)
        return 1;
    if(i<0||j<0)
        return 0;
    return f(i-1,j,v)+f(i,j-1,v);
}
int ways(vector<vector<int>>&v){
    int n=v.size();
    int m=v[0].size();
    vector<vector<int>>dp(n,vector<int>(m,0));
    dp[0][0]=1;//base case
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>0)//if we can come from top
                dp[i][j]+=dp[i-1][j];//add the ways from top
            if(j>0)
                dp[i][j]+=dp[i][j-1];//add the ways from left
        }
    }
    return dp[n-1][m-1];

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}