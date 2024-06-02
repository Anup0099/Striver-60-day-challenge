#include <bits/stdc++.h>
using namespace std;
int maximumLengthSubstring(string s)
{
    unordered_map<char, int> count;
    int i = 0, j = 0, maxLength = 0;
    while (j < s.size())
    {
        count[s[j]]++;
        while (count[s[j]] > 2)
        {
            count[s[i]]--;
            if (count[s[i]] == 0)
            {
                count.erase(s[i]);
            }
            i++;
        }
        maxLength = max(maxLength, j - i + 1);
        j++;
    }
    return maxLength;
}
int maxLength(string s)
{
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        map<char, int> mp;
        for (int j = i; j < n; j++)
        {
            string temp = s.substr(i, j - i + 1);
            bool flag = true;
            for (int k = 0; k < temp.length(); k++)
            {
                mp[temp[k]]++;
                if (mp[temp[k]] > 2)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                count = max(count, j - i + 1);
            }
            mp.clear();
        }
        ans = max(ans, count);
    }
    return ans;
}

int main()
{
    string s = "bcbbbcba";
    cout << maxLength(s) << endl;
}