#include <bits/stdc++.h>
using namespace std;

void subsequence(string &s, int k, int i, string ans, vector<string> &v, int m)
{
    // we have to find all subsequences of length k from string s of length n with duplicates allowed give the code for it
    // base case
    if (i == m)
    {
        if (ans.length() == k)
            v.push_back(ans);
        return;
    }

    ans += s[i];
    subsequence(s, k, i + 1, ans, v, m);
    ans.pop_back();
    subsequence(s, k, i + 1, ans, v, m);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s = "abc"; // convert num into lowercase letters and append to s
        // if we want to convert char into num, we can use (char)(i+97)
        // if we want to convert num into char, we can use (int)(c-97)
        // for (int i = 0; i < k; i++)
        //     s += (char)(i + 97);
        // cout << s << endl;
        // n = s.length();
        vector<string> v;
        string ans = "";
        int m = s.length();
        subsequence(s, k, 0, ans, v, m);
        for (auto i : v)
            cout << i << endl;
        string a = "";
        sort(v.begin(), v.end());
        for (int i = 0; i < k; i++)
            a += v[0][i];
        cout << a << endl;
    }
}