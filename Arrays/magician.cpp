/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
vector<int> dp(1000);
int solve(int ind, vector<int> &energy, int k, int n)
{
    if (ind >= n)
    {
        return max(0, energy[n - 1]);
    }

    if (dp[ind] != -1)
    {
        return dp[ind];
    }
    int take = energy[ind] + solve(ind + k, energy, k, n);
    int leave = solve(ind + 1, energy, k, n);
    dp[ind] = max(take, leave);
    return dp[ind];
}
int maximumEnergy(vector<int> &energy, int k)
{
    int n = energy.size();
    dp = vector<int>(n, -1);
    int ans = solve(0, energy, k, n);
    return ans;
}
// int maxEnergy(vector<int> &energy, int k)
// {
//     int n = energy.size();
//     std::vector<int> dp(n, 0);

//     for (int i = n - 1; i >= 0; --i)
//     {
//         dp[i] = energy[i];
//         int maxEnergy = 0;
//         for (int j = i + 1; j <= i + k && j < n; ++j)
//         {
//             maxEnergy = std::max(maxEnergy, dp[j]);
//         }
//         dp[i] += maxEnergy;
//     }

//     return *std::max_element(dp.begin(), dp.end());
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> energy = {5, 2, -10, -5, 1};
    int k = 3;
    cout << maximumEnergy(energy, k) << endl;
}