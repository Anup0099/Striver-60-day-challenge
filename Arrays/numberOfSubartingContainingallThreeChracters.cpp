#include <bits/stdc++.h>
using namespace std;

int constainingAllthreeChar(string s)
{
    int n = s.length();
    unordered_map<char, int> map;
    int count = 0, start = 0, end = 0;
    while (end < n)
    {
        map[s[end]]++;
        while (map['a'] and map['b'] and map['c'])
        {
            count += n - end;
            map[s[start]]--;
            start++;
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}