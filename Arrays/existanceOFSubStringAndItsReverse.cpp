#include <bits/stdc++.h>
using namespace std;
bool isSubstringPresent(string s)
{
    string rev_s = s;
    reverse(rev_s.begin(), rev_s.end());
    for (int i = 0; i < s.length() - 1; i++)
    {
        string sub_s = s.substr(i, 2);
        if (rev_s.find(sub_s) != string::npos)
        {
            return true;
        }
    }
    return false;
}
int main()
{
}