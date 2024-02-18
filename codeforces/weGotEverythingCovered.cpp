#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s = "";
        for (int i = 0; i < k; i++)
        {
            s += 'a' + i;//s = "abc"
        }
        string ans="";
        for (int i = 0; i < n; i++)
        {
            ans += s;
        }
        cout<<ans<<endl;
    }
}