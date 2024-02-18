#include <bits/stdc++.h>
using namespace std;
// bool stringMatching(string s, string p)
// {
//     int n = s.length();
//     int p = p.length();
//     int i = 0, j = 0;
//     vector<int> lps(8);
//     while (i < n and j < n)
//     {
//         if (s[i] == p[i])
//         {
//             i++;
//             j++;
//         }
//         else if (j > 0)
//         {
//             j = lps[j - 1];
//         }
//     }
// }
int mxSubarrayContaing(vector<int> v)
{
    int n = v.size();
 
    int sum = 0, maxLen = 0 ,endInd = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            v[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == 0)
        {
            maxLen = i + 1;
            endInd = i;
        }
        if (mp.find(sum) != mp.end())
        {
            if (maxLen < i - mp[sum])
            {
                maxLen = i - mp[sum];
                endInd = i;
            }
        }
        else
        {
            mp[sum] = i;
        }

    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
        {
            v[i] = 0;
        }
    }

    return maxLen;
}
int main()
{
    vector<int> v = {1, 1, 1,0,0,0};
    cout << mxSubarrayContaing(v);
}