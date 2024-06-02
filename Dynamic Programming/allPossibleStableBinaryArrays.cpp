/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
vector<vector<vector<vector<int>>>> dp;
// why we are not using the index approach because we are building the array array is not given to us
ll solve(int countZero, int countOne, int consecutive, int count, int limit)
{
    if (countZero == 0 and countOne == 0)
    {
        return 1;
    }
    ll ans = 0;
    if (dp[countZero][countOne][consecutive][count] != -1)
    {
        return dp[countZero][countOne][consecutive][count];
    }
    if (countZero > 0)
    {
        if (consecutive == 0 and count < limit)
        {
            ans += solve(countZero - 1, countOne, 0, count + 1, limit);
        }
        else if (consecutive == 1 || consecutive == 2)
        {
            ans += solve(countZero - 1, countOne, 0, 1, limit);
        }
    }
    if (countOne > 0)
    {
        if (consecutive == 1 and count < limit)
        {
            ans += solve(countZero, countOne - 1, 1, count + 1, limit) % mod;
        }
        else if (consecutive == 0 or consecutive == 2)
        {
            ans += solve(countZero, countOne - 1, 1, 1, limit) % mod;
        }
    }
    return dp[countZero][countOne][consecutive][count] = ans % mod;
}

int numberOfStableArrays(int zero, int one, int limit)
{
    dp = vector<vector<vector<vector<int>>>>(zero + 1, vector<vector<vector<int>>>(one + 1, vector<vector<int>>(3, vector<int>(limit + 1, -1))));
    ll ans = solve(zero, one, 2, 0, limit);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int zero = 3, one = 3, limit = 2;
    cout << numberOfStableArrays(zero, one, limit) << endl;
}