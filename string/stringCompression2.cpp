#include <bits/stdc++.h>
using namespace std;
int solve(int i, int k, string s)
{
    if (i >= s.length())
    {
        return 0;
    }
    if (k < 0)
    {
        return INT_MAX;
    }
    int delete_i = solve(i + 1, k - 1, s);
    int keep = 0;
    char ch = s[i];
    int additional = 0;
    int freq = 0;
    int delete_j = 0;
    for (int j = i; j < s.length(); j++)
    {
        if (s[j] == ch)
        {
            freq++;
            if (freq == 2 || freq == 10 || freq == 100)
            {
                additional++;
            }
        }
        else
        {
            delete_j++;
        }
        keep = 1 + additional + solve(j + 1, k - delete_j, s);
    }
    return min(delete_i, keep);
}
int getLengthOfOptimalCompression(string s, int k)
{
    int n = s.length();
    int i = 0;
    return solve(i, k, s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "aaabcccd";
    int k = 2;
    cout << getLengthOfOptimalCompression(s, k);
}