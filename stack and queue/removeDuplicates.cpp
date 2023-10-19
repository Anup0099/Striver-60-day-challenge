#include <bits/stdc++.h>
using namespace std;
string removeDuplicates(string s)
{
    stack<char> st;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (st.empty() or st.top() != s[i])
        {
            st.push(s[i]);
        }
        else
        {
            st.pop();
        }
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(begin(ans), end(ans));
    return ans;
}
int main() {}