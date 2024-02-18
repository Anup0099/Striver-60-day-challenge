#include <bits/stdc++.h>
using namespace std;
bool pangramChecking(string s)
{
    set<char> st;
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z')
        {
            str += ch;
        }
    }
    // cout<<str;
    for (int i = 0; i < str.size(); i++)
    {
        st.insert(str[i]);
    }
    return st.size() == 26;
}
int main()
{
    string s = "Bawds jog, flick quartz, vex nymph";
    cout << pangramChecking(s);
}