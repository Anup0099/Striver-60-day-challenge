#include <bits/stdc++.h>
using namespace std;
// space optimization method

int solve(vector<int> &house)
{
    int n = house.size();
    vector<int> dp(n + 1, 0);
    // tabulation
    dp[0] = house[0];
    for (int i = 1; i < n; i++)
    {
        int nottake = dp[i - 1];
        int take = house[i];
        if (i > 1)
        {
            take += dp[i - 2];
        }
        dp[i] = max(nottake, take);
    }
    for(auto it: dp)cout<<it<<" ";
    cout<<"\n";
    return dp[n - 1];
}
int houseRobber(vector<int> &house)
{
    vector<int> v1, v2;
    int n = house.size();
    if (n == 1)
    {
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            v1.push_back(house[i]);
        if (i != n - 1)
            v2.push_back(house[i]);
    }
    int ans = solve(v1);
    int ans2 = solve(v2);

    return max(ans, ans2);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> house = {1, 5, 2, 1, 6};
    cout << houseRobber(house);
}