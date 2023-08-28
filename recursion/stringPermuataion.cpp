#include <bits/stdc++.h>
using namespace std;
void solve(int ind, string s, vector<string> &ans, string temp)
{
    if (ind == s.size())
    {
        ans.push_back(temp);
        return;
    }
    
    for (int i = ind; i < s.size(); i++)
    {
        swap(s[i], s[ind]);
        solve(ind + 1, s, ans, temp + s[ind]);
        swap(s[i], s[ind]);
    }
}
vector<string> find_permutation(string s)
{
    // find permutation of string s
    vector<string> ans;
    set<string> st;

    solve(0, s, ans, "");
    for (auto i : ans)
    {
        st.insert(i);
    }
    ans.clear();
    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "ABC";
    vector<string> ans = find_permutation(s);
    for (auto i : ans)
    {
        cout << i << " ";
    }
}