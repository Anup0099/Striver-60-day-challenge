#include <bits/stdc++.h>
using namespace std;
int hcf(vector<int> &arr)
{
    int n = arr.size();
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = __gcd(ans, arr[i]);
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int countEven = 0;
        int countOdd = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
                countEven++;
            else
                countOdd++;
        }

        if (countOdd == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] % 4 << " ";
            }
            cout << endl;
            cout << 4 << endl;
        }
        else if (countEven > 1 or countOdd > 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] % 2 << " ";
            }
            cout << endl;
            cout << 2 << endl;
        }
        else if (countEven == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] % 2 << " ";
            }
            cout << endl;
            cout << 1 << endl;
        }
    }
}