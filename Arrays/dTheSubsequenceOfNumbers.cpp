#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr, int k, int i, int n, vector<int> &temp, vector<vector<int>> &ans)
{
    if (temp.size() == k)
    {
        ans.push_back(temp);
        return;
    }
    if (i > n)
    {
        return;
    }
    temp.push_back(arr[i]);
    solve(arr, k, i + 1, n, temp, ans);
    temp.pop_back();
    solve(arr, k, i + 1, n, temp, ans);
}
int minAbsoluteDifference(vector<int> &subsequence)
{
    int minDifference = INT_MAX;
    for (int i = 0; i < subsequence.size(); i++)
    {
        for (int j = i + 1; j < subsequence.size(); j++)
        {
            minDifference = min(minDifference, abs(subsequence[i] - subsequence[j]));
        }
    }
    return minDifference;
}
int sumOfPowers(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<vector<int>> ans;
    vector<int> temp;
    solve(arr, k, 0, n - 1, temp, ans);

    int sum = 0;
    // return minnimum absolute difference of two elements of ans
    for (int i = 0; i < ans.size(); i++)
    {
        sort(ans[i].begin(), ans[i].end());
        sum += minAbsoluteDifference(ans[i]);
    }
    return sum;
}
int main()
{
    vector<int> arr = {2, 2};
    int k = 2;
    int ans = sumOfPowers(arr, k);
    cout << ans << endl;
}