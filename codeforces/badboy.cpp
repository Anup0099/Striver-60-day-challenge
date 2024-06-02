#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n,m;
        int x,y;
        cin>>n>>m>>x>>y;
 
        if ((x == 1 && y == 1) || (x == n && y == m))
        {
            cout<<1<<" "<<m<<" ";
            cout<<n<<" "<<1<<"\n";
        }
        else
        {
            cout << 1 << " " << 1 << " ";
            cout << n << " " <<m << "\n";
        }
 
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}