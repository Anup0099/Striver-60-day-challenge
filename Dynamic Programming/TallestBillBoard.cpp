#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &rods, int i, int sum1, int sum2, vector<vector<int>> &dp)
{
    if (i >= rods.size())
    {
        if (sum1 == sum2)
            return sum1;
        return 0;
    }
    if (dp[i][abs(sum1 - sum2)] != -1)
        return dp[i][abs(sum1 - sum2)];
    int nottake2 = solve(rods, i + 1, sum1, sum2, dp);
    int take = solve(rods, i + 1, sum1 + rods[i], sum2, dp);
    int notake = solve(rods, i + 1, sum1, sum2 + rods[i], dp);
    return dp[i][abs(sum1 - sum2)] = max({take, notake, notake2});
}
int tallestBillboard(vector<int> &rods)
{
    int n = rods.size();
    vector<vector<int>> dp(n + 1, vector<int>(10001, -1));
    return solve(rods, 0, 0, 0, dp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n; 
    int t[21][10003];
    int solve(vector<int>& rods, int i, int diff) {

        if (i == n) {
            if (diff == 0)
                return 0;

            return INT_MIN;
        }
        
        if( t[i][diff+5000] != -1)
            return  t[i][diff+5000];
        
        int ans = 0;

        int nothing     = solve(rods, i + 1 , diff);
        int in_rod_1    = rods[i] + solve(rods, i + 1 , diff + rods[i]);
        int not_in_rod1 = rods[i] + solve(rods, i + 1 , diff - rods[i]);

        return t[i][diff+5000] = max({nothing, in_rod_1, not_in_rod1});
    }
    
    int tallestBillboard(vector<int>& rods) {
        n = rods.size();
        
        memset(t, -1, sizeof(t));
        
        return solve(rods, 0, 0)/2;
    }