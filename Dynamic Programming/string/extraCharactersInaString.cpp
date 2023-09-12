#include <bits/stdc++.h>
using namespace std;
unordered_set<string> st;
int n;
int solve(string s, vector<int> &dp, int ind)
{
    if(ind==n)
    {
        return 0;
    }
    if(dp[ind]!=INT_MAX)
    {
        return dp[ind];
    }
    string temp="";
    int minExtra=INT_MAX;
    



}
int minExtraChar(string s, vector<string> &dictionary)
{
    n = s.length();
    for (string i : dictionary)
    {
        st.insert(i);
    }
    vector<int> dp(n, INT_MAX);
    return solve(s,dp, 0);
}
int main()
{
    string s = "LEETSCODE";
    vector<string> dictionary = {"LEET", "CODE", "LEETSCODE"};
    cout << minExtraChar(s, dictionary) << endl;
}