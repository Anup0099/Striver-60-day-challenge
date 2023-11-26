#include <bits/stdc++.h>
using namespace std;
int operation(vector<int> &arr, int mid)
{
    int n = arr.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[mid])
        {
            sum += arr[i] - arr[mid];
        }
        else
        {
            sum += arr[i];
        }
    }
    return sum;
}
int stableSort(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    vector<int> temp;
    for (auto it : mp)
    {
        temp.push_back(it.second);
    }
    sort(begin(temp), end(temp));
    int low = 0, high = temp.size() - 1;
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (operation(arr, temp[mid]) <= operation(arr, temp[mid + 1]))
        {
            ans = temp[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        }
    return ans;
}
int main()
{
    vector<int> arr = {1, 1, 1, 2, 2, 2, 3, 3};
    cout << stableSort(arr) << endl;
    return 0;
}