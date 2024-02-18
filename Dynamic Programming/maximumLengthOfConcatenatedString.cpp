#include <bits/stdc++.h>
using namespace std;
// subsequence sum
bool hasDuplicate(string &s1, string &s2)
{
    int n = s1.length();
    int m = s2.length();
    int i = 0, j = 0;
    int arr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        if (arr[s1[i] - 'a'] > 0)
        {
            return true;
        }
        arr[s1[i] - 'a']++;
    }
    for (int i = 0; i < m; i++)
    {
        if (arr[s2[i] - 'a'] > 0)
        {
            return true;
        }
    }
    return false;
}
int solve(vector<string> &arr, int i, string temp)
{
    int n = arr.size();
    if (i == n)
    {
        return temp.length();
    }
    int include = 0, exclude = 0;
    if (hasDuplicate(arr[i], temp))
    {
        exclude = solve(arr, i + 1, temp);
    }
    else
    {
        include = solve(arr, i + 1, temp + arr[i]);
        exclude = solve(arr, i + 1, temp);
    }
    return max(include, exclude);
}
int maxLength(vector<string> &arr)
{
    int n = arr.size();
    string temp = "";
    return solve(arr, 0, temp);
}
int main()
{
    vector<string> arr = {"aa", "bb"};
    cout << maxLength(arr);
}