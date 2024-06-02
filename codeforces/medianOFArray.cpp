#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(begin(a), end(a));
        int countMedian = 0;
        int mid = 0;
        if (n % 2 == 0)
        {
            mid = n / 2;
            countMedian = 1;
            for (int i = mid; i <= n; i++)
            {
                if (a[i] == a[i - 1])
                {
                    countMedian++;
                }
            }
            cout << countMedian << endl;
        }
        else
        {
            mid = (n / 2) + 1;
            countMedian = 1;
            for (int i = mid; i <= n; i++)
            {
                if (a[i] == a[i - 1])
                {
                    countMedian++;
                }
            }
            cout << countMedian << endl;
        }
    }
}