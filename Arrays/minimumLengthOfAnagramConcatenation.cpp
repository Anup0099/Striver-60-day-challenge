/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;

bool isOk(string &s, int i)
{
    int n = s.length();
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int len = i; len < n; len += i)
    {
        int rangeFreq[26] = {0};
        for (int j = len; j < i + len; j++)
        {
            rangeFreq[s[i] = 'a']++;
        }
        for (int k = 0; k < 26; k++)
        {
            if (freq[k] != rangeFreq[k])
            {
                return false;
            }
        }
    }
    return true;
}
int minAnagramLength(string s)
{
    int n = s.size();
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0 and isOk(s, i))
        {
            return i;
        }
    }

    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "abba";
    cout << minAnagramLength(s) << endl;
}