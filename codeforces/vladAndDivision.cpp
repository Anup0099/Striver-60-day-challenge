#include <bits/stdc++.h>
using namespace std;
string convert(int n)
{
    string ans = "";
    while (n > 0)
    {
        int rem = n % 2;
        ans += to_string(rem);
        n /= 2;
    }
    reverse(ans.begin(), ans.end());
    while (ans.size() < 31)
    {
        ans += "0";
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x = a[i];
            string s = convert(x);
            mp[s]++;
        }

        int ans = n;
        for (int i = 0; i < n; i++)
        {
            int v = a[i];
            string flipbits = "";
            string bits = convert(v);
            if (mp[bits] == 0)
                continue;
            while (v > 0)
            {
                int rem = v % 2;
                if (rem == 0)
                    flipbits += "1";
                else
                    flipbits += "0";
                v /= 2;
            }
            while (flipbits.size() < 31)
            {
                flipbits += "1";
            }
            if (mp[flipbits] > 0)
            {
                mp[bits]--;
                mp[flipbits]--;
                ans--;
            }
        }
        cout << ans << endl;
    }
}