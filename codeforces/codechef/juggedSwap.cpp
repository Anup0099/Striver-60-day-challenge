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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = false;
        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES" << endl;
        }
        else
        {

            for (int i = 1; i < n-1; i++)
            {
                if (arr[i] > arr[i + 1] and arr[i] > arr[i - 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            if (is_sorted(arr.begin(), arr.end()))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}