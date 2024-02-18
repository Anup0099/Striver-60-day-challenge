#include <bits/stdc++.h>
using namespace std;
// You are given a 0-indexed string num of length n consisting of digits.

// Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false.
bool digitCount(string s)
{
    int n = s.length();
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(s[i] - '0');
        cout << v[i] << " ";
    }

    for (int i = 0; i < n; i++)
    {
        int counts = count(v.begin(), v.end(), i);
        if (counts != v[i])
        {
            return false;
        }
    }
    // time complexity: O(n^2) why? because count() is O(n)
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "1210";
    cout << digitCount(s);
}