#include <bits/stdc++.h>
using namespace std;
string applyOperationToMakeStringEmpty(string s)
{
    int n = s.size();
    string ans = "";
    int maxi = 0;
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, ++mp[s[i]]);
    }
    unordered_map<char,int>map;
    for (int i = 0; i < n; i++)
    {
        map[s[i]]++;
        if (map[s[i]] == maxi)
        {
            ans += s[i];
        }
    }
    return ans;
}
int main()
{
    string s = "aabcbbca";
    cout << applyOperationToMakeStringEmpty(s);
    return 0;
}