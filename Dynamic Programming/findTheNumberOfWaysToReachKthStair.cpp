/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
unordered_map<int, unordered_map<int, unordered_map<int, int>>> dp;
int solve(int index, int jump, int lastJump, int k)
{
    // base case
    // if (index == k || !lastJump || index == k + 1)
    // {
    //     return 1;
    // }
    if(dp.count(index) and dp[index].count(jump) and dp[index][jump].count(lastJump))
    {
        return dp[index][jump][lastJump];
    }
    if (index > k + 1)
    {
        return 0;
    }
    int ans = index == k;
    // for upjumpcase
    ans += solve(index + pow(2, jump), jump + 1, 0, k);
    // for downjump case
    if (index != 0 and lastJump != 1)
    {
        ans += solve(index - 1, jump, 1, k);
    }
    return dp[index][jump][lastJump] = ans;
}
int waysToReachStair(int k)
{

    return solve(1, 0, 0, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k = 1;
    cout << waysToReachStair(k) << endl;
}