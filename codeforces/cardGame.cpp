#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
 
int main()
{
    _test
    {
        int n;
        cin>>n;
        
        vector<ll int> a(n);
        for(auto &e: a)     cin>>e;
        
        if(n == 1)
        {
            if(a[0] <= 0)       cout<<0<<"\n";
            else                cout<<a[0]<<"\n";
            
            continue;
        }
        
        ll int ans = 0;
        
        if(a[0]>=0 || a[1]<=0)
        {
            for(int i=0; i<n; i++)
                ans += max(0ll, a[i]);
                
            cout<<ans<<"\n";
            
            continue;
        }
        
        for(int i=2; i<n; i++)
            ans += max(0ll, a[i]);
            
        ans += max(0ll, a[0]+a[1]);
            
        cout<<ans<<"\n";
    }
}