/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        
        string s;
        cin >> s;
        int n = s.size();
        string ans = s;
        for (int i = 0; i < n-1; i++)
        {
            // swap every two consecutive characters
            swap(ans[i], ans[i + 1]);
        }
        // cout << ans << endl;
        // cout << s << endl;
        if(ans==s)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }
        
        
    }
}