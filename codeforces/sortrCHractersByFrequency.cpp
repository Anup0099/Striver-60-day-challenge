#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    int n = s.length();

    string ans = "";
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    priority_queue<pair<int, char>> pq;
    for (auto it : mp)
    {
        pq.push({it.second, it.first});
    }
    while (!pq.empty())
    {
        int freq = pq.top().first;
        char ch = pq.top().second;
        pq.pop();
        while (freq--)
        {
            ans += ch;
        }
    }
    return ans;
}

int main() {}