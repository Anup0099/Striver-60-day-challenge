#include <bits/stdc++.h>
using namespace std;
string convert(string s, int numRows)
{
    int n = s.length();
    if (numRows == 1)
    {
        return s;
    }
    int numrows = 0, mod = 0;
    vector<string> ans(numRows);
    for (auto it : s)
    {
        ans[numrows].push_back(it);
        if (numrows == 0)
        {
            mod = 1;
        }
        if (numrows == numRows - 1)
        {
            mod = -1;
        }
        numrows += mod;
    }
    s.clear();
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    for (auto it : ans)
    {
        s.append(it);
    }
    return s;
}

string convert(string s, int r)
{
    int n = s.length();
    vector<string> ans(r);
    int currow = 0, mod = 1;
    for (int i = 0; i < n; i++)
    {
        ans[currow].push_back(s[i]);
        if (currow == 0)
            mod = 1;
        if (currow == r - 1)
            mod = -1;
        currow += mod;
    }
    s.clear();
    for (auto it : ans)
    {
        s += it;
    }
    return s;
}
int main()
{

    string s = "PAYPALISHIRING";
    int numRows = 3;
    cout << convert(s, numRows);
}