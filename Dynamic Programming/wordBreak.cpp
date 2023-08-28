#include <bits/stdc++.h>
using namespace std;
int n;
set<int> st;
bool solve(int idx, string s)
{
    if (idx >= n)
    {
        return true;
    }
    if()
    for(int l=1;i<=n;l++)
    {
        string temp= s.substr(idx,l);
        if(st.find(temp)!=st.end() and solve(idx+l,s))
        {
            return true;
        }
    }
    return false;
}
bool wordBreak(string s, vector<string> &wordDict)
{
    int idx = 0;
    n = s.length();
    for (auto &it : wordDict)
    {
        set.insert(it);
    }
    return solve(0, s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}