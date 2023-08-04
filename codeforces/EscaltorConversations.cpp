#include <bits/stdc++.h>
using namespace std;

// n passengers 
// m steps 
// ith steps height has i*k
//vladd height is given 

//

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, h;
        cin >> n >> m >> k >> h;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0;
        int stepsmax = (m - 1) * k;

        for (int i = 0; i < n; i++)
        {
            int diff = abs(v[i] - h);
            if (diff > stepsmax)
            {
                continue;
            }
            if (diff % k == 0 and diff / k < m and diff != 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}