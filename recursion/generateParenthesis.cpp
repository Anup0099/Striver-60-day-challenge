#include <bits/stdc++.h>
using namespace std;
// generate parenthesis
vector<string> ans;
bool isValid(string &s)
{
    int count = 0;
    for (auto x : s)
    {
        if (x == '(')
        {
            count++;
        }
        else
        {
            if (count <= 0)
            {
                return false;
            }
            count--;
        }
    }
    return (count == 0);
}
void solve(int n, string s)
{
    if (s.size() == 2 * n)
    {
        if (isValid(s))
        {
            ans.push_back(s);
            return;
        }
    }
    s.push_back('(');
    solve(n, s);
    s.pop_back();
    s.push_back(')');
    solve(n, s);
    s.pop_back();
}
vector<string> generateParenthesis(int n)
{
    string s="";
    solve(n, s);
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 3;
    vector<string> ans = generateParenthesis(n);
    for (auto x : ans)
    {
        cout << x << endl;
    }
}