#include <bits/stdc++.h>
using namespace std;
bool halvesAreAlike(string s)
{
    int n = s.length();

    string ans = "";
    for (auto it : s)
    {
        ans += tolower(it);
    }
    int count1 = 0;
    int count2 = 0;
    // for (int i = 0; i < n / 2; i++)
    // {
    //     if (ans[i] == 'a' or ans[i] == 'e' or ans[i] == 'i' or ans[i] == 'o' or ans[i] == 'u')
    //     {
    //         count1++;
    //     }
    // }
    // for (int i = n / 2; i < n; i++)
    // {
    //     if (ans[i] == 'a' or ans[i] == 'e' or ans[i] == 'i' or ans[i] == 'o' or ans[i] == 'u')
    //     {
    //         count2++;
    //     }
    // }
    // return count1 == count2;
    set<char> st = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < n / 2; i++)
    {
        if (st.find(ans[i]) != st.end())
        {
            count1++;
        }
    }
    for (int i = n / 2; i < n; i++)
    {
        if (st.find(ans[i]) != st.end())
        {
            count2++;
        }
    }
    return count1 == count2;
}
int main()
{
    string s = "Uouo";
    cout << halvesAreAlike(s);
}