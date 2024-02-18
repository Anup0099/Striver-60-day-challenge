#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool flag = false;
    int t25 = 0, t50 = 0;
    if (arr[0] != 25)
        flag = true;
    else
        t25++;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == 25)
            t25++;
        else if (arr[i] == 50)
        {
            if (t25 > 0)
            {
                t25--;
                t50++;
            }
            else
            {
                flag = true;
                break;
            }
        }
        else
        {
            if (t50 > 0 && t25 > 0)
            {
                t50--;
                t25--;
            }
            else if (t25 >= 3)
                t25 -= 3;
            else
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
        cout << "NO";
    else
        cout << "YES";
}