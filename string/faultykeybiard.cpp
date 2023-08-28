
#include <bits/stdc++.h>
using namespace std;
string finalString(string s)
{
    int n = s.length();
    string ans = "";
    string ans2 = "";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='i')reverse(ans.begin(),ans.end());
        else ans+=s[i];
    }
    

    cout<<ans<<endl;
    
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s="string";
    cout<<finalString(s);
}