/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
bool check(vector<vector<int>> &arr, int i, int ans)
{
    if (arr[i][0] <= ans and arr[i][1] <= ans)
    {
        return true;
    }
    return false;
}
int maxPoints(vector<vector<int>> &arr, string str)
{
    int n = arr.size();
    int m = arr[0].size();
    int ans = 0;
    int left = 0, right = 1e9;
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = abs(arr[i][0]);
        arr[i][1] = abs(arr[i][1]);
    }
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        unordered_map<char, int> temp;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i][0] <= mid and arr[i][1] <= mid)
            {
                temp[str[i]]++;
            }
        }
        for (auto it : temp)
        {
            if (it.second >= 2)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (check(arr, i, ans))
        {
            ans++;
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}