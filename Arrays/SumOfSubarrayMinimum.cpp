#include <bits/stdc++.h>
using namespace std;
vector<int> nextsmallerToLeft(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                ans.push_back(arr[j]);
                break;
            }
        }
        if (ans.size() != i + 1)
        {
            ans.push_back(-1);
        }
    }
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return ans;
}
vector<int> nextSmallerElementTORight(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                ans.push_back(arr[j]);
                break;
            }
           

        }

    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return ans;
}
int sumOfSubarrayMinimums(vector<int> &arr)
{
    int n = arr.size();
    vector<int> left = nextsmallerToLeft(arr);
    vector<int> right = nextSmallerElementTORight(arr);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += abs(i - left[i]) * abs(i - right[i]);
    }
    return ans;
}
int main()
{
    vector<int> arr = {3, 1, 2, 4};
    cout << sumOfSubarrayMinimums(arr) << endl;
    return 0;
}