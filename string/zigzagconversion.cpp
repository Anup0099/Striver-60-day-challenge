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
int main()
{

    string s = "PAYPALISHIRING";
    int numRows = 3;
    cout << convert(s, numRows);
}