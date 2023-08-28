#include <bits/stdc++.h>
using namespace std;
int longestSubstringWithoutrepeatingCharacters(string s)
{
    int n = s.length();
    int ans = 0;
    unordered_set<char> st;
    int i = 0, j = 0;
    while (i < n and j < n)
    {
        if(st.find(s[j])!=st.end())
        {
            st.erase(s[i]);
            ++i;
        }
        else{
            st.insert(s[j]);
            ++j;
            ans= max(ans,j-i);
        }
    }
    return ans;
}
int main()
{
    string s = "abcabcbb";
    cout << longestSubstringWithoutrepeatingCharacters(s);
}