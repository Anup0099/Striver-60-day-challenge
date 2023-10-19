#include <bits/stdc++.h>
using namespace std;
char findTheDifference(string s, string t)
{
    int n = s.length();
    int m = t.length();
    char ans = 0;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            ans = t[i];
            break;
        }
    }
    if (ans == 0)
    {
        ans = t[m - 1];
    }
    return ans;
}
string removeDuplicateLetters(string s)
{
    int n = s.length();
    vector<bool> visit(26, false);
    vector<int> lastIndex(26, 0);

    for (int i = 0; i < n; i++)
    {
        lastIndex[s[i] - 'a'] = i;
    }
    string res = "";
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        int index = s[i] - 'a';

        if (visit[index] == true)
            continue;
        while (res.length() > 0 and res.back() > ch and lastIndex[res.back() - 'a' > i])
        {
            visit[res.back() - 'a'] = false;
            res.pop_back();
        }
        res.push_back(ch);
        visit[index] = true;
    }
    return res;
}
int main() {}