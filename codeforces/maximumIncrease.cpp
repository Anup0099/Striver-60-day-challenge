#include <bits/stdc++.h>
using namespace std;
// You are given array consisting of n integers. Your task is to find the maximum length of an increasing subarray of the given array.

// A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray strictly greater than previous.

int solve(int index, vector<int> &v, int n)
{
    if (index == n)
    {
        return 0;
    }
    int take = 0;
    int nottake = 0;
    if (v[index] > v[index - 1])
    {
        take = 1 + solve(index + 1, v, n);
    }
    else
    {
        nottake = solve(index + 1, v, n);
    }
    return max(take, nottake);
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // int ans = 1;
    // int i = 0;
    // int j = 0;
    // while (j < n)
    // {
    //     if (v[j + 1] > v[j])
    //     {
    //         j++;
    //     }
    //     else
    //     {
    //         ans = max(ans, j - i + 1);
    //         j++;

    //         i = j;
    //     }
    // }
    // cout << ans;
    // cout << max(ans, j - i + 1) ;// for the case when the last element is the last element of the increasing subarray and the loop ends without updating the ans variable

    // another method using recursion take and nottake approach using dp
    vector<int> dp(n, 1);
    // for (int i = 1; i < n; i++)
    // {
    //     if (v[i] > v[i - 1])
    //     {
    //         dp[i] = dp[i - 1] + 1;
    //     }
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
    // cout << *max_element(dp.begin(), dp.end());
    
    
}