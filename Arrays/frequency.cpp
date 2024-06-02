#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(begin(s), end(s));
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    int CountMaxFreq = 0;
    char MaxFreqChar = ' ';
    string temp = "";
    for (auto it : mp)
    {
        CountMaxFreq = max(CountMaxFreq, it.second);
    }
    for (auto it : mp)
    {
        if (it.second == CountMaxFreq)
        {
            temp += it.first;
        }
    }
    // cout << temp << endl;
    sort(begin(temp), end(temp));
    char ans = temp[0];
    cout << ans;
}