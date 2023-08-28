 
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll     long long
#define _test   int _TEST; cin>>_TEST; while(_TEST--)
#define pb     push_back
 
int main()
{
    _test
    {
        int n;
        cin>>n;
 
        int m = (n*(n-1))/2;
 
        vector<int> a(m);
        for(auto &e: a)
            cin>>e;
 
        sort(a.begin(), a.end());
 
        if(a[0] == a[m-1])
        {
            for(int i=0; i<n; i++)
                cout<<a[0]<<" ";
            cout<<"\n";
            continue;
        }
 
        map<int, int> cnt;
        for(auto e: a)
            cnt[e]++;
 
        vector<int> ans;
 
        for(auto [x, c]: cnt)
        {
            while(c >= n-(ans.size()+1))
            {
                c -= n-(ans.size()+1);
                ans.pb(x);
            }
        }
 
        for(auto e: ans)
            cout<<e<<" ";
        cout<<"\n";
    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int m=n*(n-1)/2,b[m];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(b,b+m);
        for(int i=0;i<m;i+=--n)cout<<b[i]<<' ';
        //--n is used to decrease n by 1 and then use it in i+=--n what is this line doing? it is printing the first element of the array and then skipping n-1 elements and then printing the next element and then skipping n-1 elements and so on
        
        cout<<"1000000000\n";
    }
}
