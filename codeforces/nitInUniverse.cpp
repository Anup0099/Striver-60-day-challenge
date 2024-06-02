#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <=n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        for (int i = 1; i <=n; i++)
        {
            if (v[i - 1] == 0 and v[i] != 0)
            {
                count++;
            }
        }
        count = min(count, 2);
        cout << count << endl;
    }
}