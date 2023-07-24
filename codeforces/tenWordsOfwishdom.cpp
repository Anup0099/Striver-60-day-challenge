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
        int n;
        cin >> n;
        int a, b;
        int j;
        int sum = 0;
        int q = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            if (a <=10 and b > q)
            {
                sum = a;
                q = b;
                j=i+1;
            }
        }
        cout<<j<<endl;
    }
}