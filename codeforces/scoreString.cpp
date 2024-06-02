#include <bits/stdc++.h>
using namespace std;
int scoreString(string s)
{
    int n = s.length();
    int ans = 0;
    set<int> st;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        st.insert(s[i]);
        a.push_back(s[i]);
    }
   
    for (int i = 0; i < a.size() - 1; i++)
    {
        ans += abs(a[i] - a[i + 1]);
    }
    return ans;
}
int main()
{
    string s="hello";
    cout<<scoreString(s);
}