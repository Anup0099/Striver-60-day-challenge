#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a1[i]]++;
    }
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    for (int i = 0; i < m; i++)
    {
        if (--mp[a2[i]] == -1) // what is this line doing?   //this line is checking if the element is present in the map or not if it is not present then it will return -1  and if it is present then it will return 0 and then we are checking if it is -1 or not
        {
            return "No";
        }
    }
    return "Yes";
}
string subset(int arr1[], int arr2[], int n, int m)
{
    // int count = 0;
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr2[i] == arr1[j])
    //         {
    //             count++;
    //         }
    //     }
    // }
    // if (count == m)
    // {
    //     return "YES";
    // }
    // else
    // {
    //     return "NO";
    // }
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr1[i]] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        if (mp[arr2[i]] != 1)
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    int a1[] = {1, 2, 3, 4, 4, 5, 6};
    int a2[] = {1, 2, 4};
    int n = sizeof(a1) / sizeof(a1[0]);
    int m = sizeof(a2) / sizeof(a2[0]);
    cout << isSubset(a1, a2, n, m);
    return 0;
}