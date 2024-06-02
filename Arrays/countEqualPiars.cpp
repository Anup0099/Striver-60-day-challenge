#include <bits/stdc++.h>
using namespace std;
int countEqualPairs(vector<int> arr1, vector<int> arr2)
{
    int n = arr1.size();
    int m = arr2.size();
    int count = 0;
    // if (n > m)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         for (int j = 0; j < m; j++)
    //         {
    //             if (arr1[i] == arr2[j])
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    // }
    // else
    // {
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             if (arr2[i] == arr1[j])
    //             {
    //                 count++;
    //             }
    //         }
    //     }
    // }
    // return count;
    // unordered_map<int, int> map, mp;
    // for (int i = 0; i < n; i++)
    // {
    //     map[arr1[i]]++;
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     mp[arr2[i]]++;
    // }
    // for (auto x : map)
    // {
    //     if (mp.find(x.first) != mp.end())
    //     {
    //         count += map[x.first] * mp[x.first];
    //     }
    // }
    return count;
}
int countEqualPairss(vector<int> &arr1, vector<int> &arr2)
{
    int i = 0, j = 0, count = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] == arr2[j])
        {
            int temp1 = arr1[i], temp2 = arr2[j];
            int count1 = 0, count2 = 0;
            while (i < arr1.size() && arr1[i] == temp1)
            {
                i++;
                count1++;
            }
            while (j < arr2.size() && arr2[j] == temp2)
            {
                j++;
                count2++;
            }
            count += count1 * count2;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return count;
}
int main()
{
    vector<int> arr1 = {1, 1, 3, 3, 3, 5, 8, 8};
    vector<int> arr2 = {1, 3, 3, 4, 5, 5, 5};
    cout << countEqualPairss(arr1, arr2);
}