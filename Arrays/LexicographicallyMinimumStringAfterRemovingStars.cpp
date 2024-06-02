/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
string clearStars(string s)
{
    int n = s.size();
    string ans = "";
    int i = 0, j = 0;

    // calclate the smallest charcter on the left side of the star on the go
    while (i < n)
    {
        if (s[i] != '*')
        {
            if (s[i] < s[j])
            {
                j = i;
            }
            i++;
        }
        else
        {
            ans += s.substr(0, j) + s.substr(j + 1, i - j - 1);
            s = s.substr(i + 1);
            n = s.size();
            i = 0;
            j = 0;
        }
    }
    ans += s;
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s = "aaba*";
    cout << clearStars(s);
}