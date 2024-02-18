#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        // sort according to frequency
        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++;
            }
            else
            {
                mp[s[i]] = 1;
            }
        }
        int maxi = 0;
        for (auto i : mp)
        {
            // cout << i.first << " " << i.second << endl;
            maxi = max(maxi, i.second);
        }
        // cout << maxi << endl;
        if (maxi > n / 2)
        {
            cout << 2 * (maxi)-n << endl;
        }else{
            cout << n%2 << endl;
        }
    }
}