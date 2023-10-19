#include <bits/stdc++.h>
using namespace std;
// given a binary string fina a regex that checks whether that binary number when converted to a decimal number is a powerr of two or not

// 1. 1
// 2. 10
// 3. 11
// 4. 100

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 1;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            if (v[i] == ans)
            {

                ans++;
            }
            b.push_back(ans);
            ans++;
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
}