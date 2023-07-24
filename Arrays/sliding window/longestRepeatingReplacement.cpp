#include <bits/stdc++.h>
using namespace std;
int longestRepeatingCharacterReplacement(string s, int k)
{
    int n = s.length();
    int i = 0, j = 0, ans = 0;
    map<char, int> map;

    while (j < n)
    {
        map[s[j]]++;
        int maxFreq = 0;
        for (auto it : map)
        {
            maxFreq = max(maxFreq, it.second);
        }
        if (j - i + 1 - maxFreq > k)
        {
            map[s[i]]--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}