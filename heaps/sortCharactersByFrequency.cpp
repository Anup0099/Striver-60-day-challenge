#include <bits/stdc++.h>
using namespace std;
string frequencySort(string s)
{
    int n = s.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    // make a min heap
    priority_queue<pair<int, char>> pq;
    for (auto it : mp)
    {
        int num = it.second;
        int cha = it.first;
        pq.push({num, cha});
    }
    string ans = "";
    while (!pq.empty())
    {
        int freq = pq.top().first;
        char ch = pq.top().second;
        pq.pop();
        for (int i = 0; i < freq; i++)
        {
            ans += ch;
        }
    }
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "tree";
    cout << frequencySort(s) << endl;
    return 0;
}