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
        bool isSorted = is_sorted(arr.begin(), arr.end());
        if (isSorted)
        {
            cout << "YES" << endl;
            continue;
        }
        vector<int> temp;
        bool isgreater = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {

                if (arr[i] > 10)
                {
                    vector<int> temp2;
                    while (arr[i] > 0)
                    {
                        int rem = arr[i] % 10;
                        if (rem < arr[i + 1])
                        {
                            temp2.push_back(rem);
                        }
                        else
                        {
                            isgreater = false;
                        }

                        arr[i] /= 10;
                    }
                    if (isgreater)
                    {
                        reverse(begin(temp2), end(temp2));
                        for (int j = 0; j < temp2.size(); j++)
                        {
                            temp.push_back(temp2[j]);
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    temp.push_back(arr[i]);
                }
            }
        }
        for (auto it : temp)
        {
            cout << it << endl;
        }
        bool flag = true;
        for (int i = 0; i < temp.size() - 1; i++)
        {
            if (temp[i] > temp[i + 1])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
