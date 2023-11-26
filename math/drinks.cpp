#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        double temp = a[i] / 100.00;
        // cout<<temp<<endl;
        ans += temp;
        
    }
    ans = (ans / n) * 100;
    cout << ans << endl;
}