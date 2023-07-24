#include <bits/stdc++.h>
using namespace std;

int main()
{
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);
    //     cout.tie(NULL);
    //     array of length a is given
    //     choose index i
    //     add 1 to
    //     we have to make array not sorted
    //     1 1
    //     1+1=2
    //     2 1
    //     no of operation is 1
    //     1 8 10 13
    //     2 9 11 12
    //     3 10 12 11
    //     no. of operation=2
    // min= 8-1=7
    // 10-8=2
    // 13-10=3
    // min=2
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;


        vector<int> v(n);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        int mini = INT_MAX;
        for (int i = 1; i < n; i++)
        {
            mini = min(mini, v[i + 1] - v[i]);
        }
        if (mini < 0)
            cout << 0 << endl;
        else
        {
            cout << mini / 2 + 1 << endl;
        }
    }
}