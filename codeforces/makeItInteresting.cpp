/*
ॐ भूर्भुवः स्व तत्सवितुर्वरेण्यं
भर्गो देवस्य धीमहि
धियो यो नः प्रचोदयात॥
*/
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
        int count = 0;
        if (n == 1)
        {
            cout << "0\n";
            continue;
        }
        for (int i = n - 2; i >= 0; i--)
        {
            int temp = arr[i];
            if (arr[i] >= arr[i + 1])
            {

                while (temp >= arr[i + 1])
                {
                    temp = temp / 2;
                    count++;
                    if (temp == 0)
                    {
                        break;
                    }
                }
            }
            arr[i] = temp;
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] >= arr[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << count << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
}