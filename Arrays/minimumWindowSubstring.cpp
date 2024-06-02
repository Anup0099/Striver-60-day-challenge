#include <bits/stdc++.h>
using namespace std;
string minimumWindowSubstring(string s, string t)
{
    int n = s.size();
    int m = t.size();
    int count = 0, l = 0, r = 0, min_len = INT_MAX, start = 0;
    vector<int> hash(256, 0);
    for (int i = 0; i < n; i++)
    {

        hash[s[i]]++;
    }
    while (r < n)
    {
        if (hash[s[r]] > 0)
        {
            count++;
            hash[s[r]]--;
        }
        else if (count == m)
        {
            while (count == m)
            {
                int len = r - l + 1;
                if (len < min_len)
                {
                    min_len = len;
                    start = l;
                }
                hash[s[l]]--;
                if (hash[s[l]] > 0)
                {
                    count--;
                }
               
            }
            r++;
        }
        
    }
    return min_len == INT_MAX ? "" : s.substr(start, min_len);
}
int main()
{
    string s = "DDADOBECODEBANC";
    string t = "ABC";
    cout << minimumWindowSubstring(s, t) << endl;
}