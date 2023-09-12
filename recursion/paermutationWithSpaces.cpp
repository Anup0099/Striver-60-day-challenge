#include <bits/stdc++.h>
using namespace std;
void solve(int i, int j, vector<char> ans, vector<string> &res, string s)
{
    if (i == s.size())
    {
        string temp = "";
        for (auto x : ans)
        {
            temp += x;
        }
        res.push_back(temp);
        return;
    }
    ans.push_back(s[i]);
    solve(i + 1, j + 1, ans, res, s);
    ans.push_back(' ');
    ans.push_back(s[i]);
    
    solve(i + 1, j+2, ans, res, s);
}
vector<string> permutation(string s)
{
    // Code Here
    
    
}
int main()
{
    string s = "ABC";
    vector<string> ans = permutation(s);
    for (auto x : ans)
    {
        cout << x << endl;
    }
}